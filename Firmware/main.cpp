#include <Arduino.h>
#include <TFT_eSPI.h>
#include <ChronosESP32.h>
#include <ESP32Time.h>
#include "sprites.h"

#define PIN_BUZZER 6

TFT_eSPI tft = TFT_eSPI();
ChronosESP32 chronos("DESK-ORPH");
ESP32Time rtc;

enum PetState { IDLE, SLEEP, LOOKING, CONFUSED };
PetState currentState = IDLE;

int currentFrame = 0;
int currentAnimLength = 3;
const uint16_t* const* activeAnimArray = idleFrames;
unsigned long lastFrameTime = 0;
unsigned long sleepStartTime = 0;
unsigned long lastBehaviorChange = 0;
unsigned long lastTimeCheck = 0;

void playChirp() {
  tone(PIN_BUZZER, 1000, 80);
  delay(100);
  tone(PIN_BUZZER, 2000, 80);
}

void setExpression(PetState newState, const uint16_t* const* frames, int frameCount) {
  currentState = newState;
  activeAnimArray = frames;
  currentAnimLength = frameCount;
  currentFrame = 0;
  tft.fillScreen(TFT_BLACK);
  
  if (newState == SLEEP) {
    sleepStartTime = millis();
  }
}

void notificationCallback(Notification notif) {
  setExpression(CONFUSED, confusedFrames, 1);
  playChirp();
  
  tft.setTextColor(TFT_YELLOW, TFT_BLACK);
  tft.setTextDatum(MC_DATUM);
  tft.drawString(notif.title.c_str(), 120, 80, 2);
}

void setup() {
  Serial.begin(115200);

  tft.init();
  tft.setRotation(0);
  tft.fillScreen(TFT_BLACK);

  pinMode(PIN_BUZZER, OUTPUT);

  chronos.setNotificationCallback(notificationCallback);
  chronos.begin();

  setExpression(IDLE, idleFrames, 3);
  playChirp();
}

void loop() {
  chronos.loop();

  unsigned long currentMillis = millis();

  if (currentMillis - lastTimeCheck > 5000) {
    lastTimeCheck = currentMillis;
    int currentHour = rtc.getHour(true);
    bool isNightTime = (currentHour >= 20 || currentHour < 6);

    if (isNightTime && currentState != SLEEP) {
      setExpression(SLEEP, sleepFrames, 2);
    } else if (!isNightTime && currentState == SLEEP) {
      setExpression(IDLE, idleFrames, 3);
    }
  }

  if (currentState != SLEEP && currentState != CONFUSED) {
    if (currentMillis - lastBehaviorChange > 8000) {
      lastBehaviorChange = currentMillis;
      if (random(0, 2) == 0) {
        setExpression(IDLE, idleFrames, 3);
      } else {
        setExpression(LOOKING, lookFrames, 2);
      }
    }
  }

  if (currentState == SLEEP) {
    if (currentFrame == 0 && (currentMillis - sleepStartTime > 3000)) {
      currentFrame = 1;
      tft.fillScreen(TFT_BLACK);
    }
    tft.pushImage(104, 104, 32, 32, activeAnimArray[currentFrame]);
  } 
  else {
    if (currentMillis - lastFrameTime > 250) {
      lastFrameTime = currentMillis;
      tft.pushImage(104, 104, 32, 32, activeAnimArray[currentFrame]); 
      currentFrame = (currentFrame + 1) % currentAnimLength;
    }
  }
}