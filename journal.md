## 06-10-2026 - 2h logged
Hiii , i searched and added all the components needed for the project and added them in the BOM and i drew a rough sketch of how the project-Desk pet will look like . after all the components were confirmed i downloed the 3d step file of the components , added their symbols in kicad schematic and wired them all together. so now the schematic is done and im assigning the footprint of it .Kicad keeps on crashing so its hard to finish it :<img width="714" height="567" alt="image" src="https://github.com/user-attachments/assets/a636c891-5f25-427c-8468-7b7ebafd246b" />
<img width="37" height="43" alt="image" src="https://github.com/user-attachments/assets/4307c5ef-64f5-4420-acbb-b0f4d03eaaa0" />
<img width="887" height="636" alt="image" src="https://github.com/user-attachments/assets/72894a50-c22a-4fa3-97a9-26b2346f63eb" />
<img width="892" height="626" alt="image" src="https://github.com/user-attachments/assets/6c106b66-7843-4425-a779-12b948ce199c" />
<img width="710" height="545" alt="image" src="https://github.com/user-attachments/assets/25807b4f-ed80-4e24-8ef5-79b6f4330576" />
tommorow ill assign the footprints , route the PCB , add and align the 3d step files of the components and add silkscreen art . after this ill work on the firmware and animation art

## 07-10-2036 - 5.72h logged 
### Day- 2 new ESP32 S3 Devkit and changes to schematic
The ESP32 S3 Devkit which was in my robu cart is now Out of stock :( , so i emailed them to check when will be available and they replied saying it might take around 5 weeks so i searched the internet for a similar one and found it (which is a bit more expensive like $1 extra)on amazon with good review so im planning to add tht one to my cart for now amazon link.

I changed the ESP32 schematic connections to match the new ESP32 S3<img width="585" height="587" alt="image" src="https://github.com/user-attachments/assets/2ace2d69-abaf-4cb1-9bda-d68c263e8732" />
<img width="970" height="600" alt="image" src="https://github.com/user-attachments/assets/3b378c1e-7857-43e5-9656-64ba3a4cd99e" />
### Added the footprint
<img width="718" height="250" alt="image" src="https://github.com/user-attachments/assets/1e61755f-13de-4784-aa66-18be9b1e3031" />
Had to make a lot of changes to the symbols and footprint

### PCB
added the 3d step of the components (i downloaded the wrong one before )
<img width="716" height="464" alt="image" src="https://github.com/user-attachments/assets/3594ccbe-98be-4038-9f75-4244692a2942" />
<img width="639" height="511" alt="image" src="https://github.com/user-attachments/assets/2af271e5-c0ec-424e-ae00-0aea53753739" />
Kicad keeps on crashing
### Updated schematic
<img width="665" height="556" alt="image" src="https://github.com/user-attachments/assets/b0097269-ad57-4631-b231-f37e988966c5" />
### Updated footprint (with the custom downloaded power switch footprint)
This is the power switch im goin fore cause it looks cool!! but kicad doest have a footprint for it so i downloaded a footprint for it online and hope it works
<img width="800" height="800" alt="image" src="https://github.com/user-attachments/assets/24501bdc-4d33-4149-a335-0e540e964650" />
<img width="955" height="265" alt="image" src="https://github.com/user-attachments/assets/fa8abfa2-c46f-4cb4-9f2a-fea828339268" />

### PCB DONE (for now)
so the PCB is done and dusted , added all 3d step , routed it and 0 DRC error , but i have to solder the TP4056 using copper wire to the PCB because it doest have pins to go through the PCB , other than tht everythng is good (as you can see in the below images)
<img width="685" height="505" alt="image" src="https://github.com/user-attachments/assets/336449f4-0ada-4a9c-8356-3d0b5544ebfa" />
<img width="737" height="486" alt="image" src="https://github.com/user-attachments/assets/cf1fda6b-dc87-4581-a603-2b27f80a2fed" />
<img width="657" height="567" alt="image" src="https://github.com/user-attachments/assets/236cbe47-3e27-4f15-b2c9-ec6eb5df3598" />
<img width="652" height="478" alt="image" src="https://github.com/user-attachments/assets/7e378dd3-52f8-4f79-b08a-bce11a955a46" />

### SO WHATS LEFT??
- silkscreen and copper art to the PCB
- make the PCB more polished
- Write firmware for this
- work on animation art for the desktop pet.
- i only planned to work on this for 1.5-2hrs but i finished this instead of doing my HW so byeeeee😚

## 8 Oct 2026 - 0.7h logged
Added GND ground pour to the PCB with some thermal relief ig , , i still need to art more stuff to the PCB to make it look cool but rn it works so i might work on the firmware next<img width="710" height="476" alt="image" src="https://github.com/user-attachments/assets/0a7e1627-f7ea-49b4-8260-e35e881516dd" />
<img width="697" height="515" alt="image" src="https://github.com/user-attachments/assets/33840af9-1fe6-4555-a207-0b0563ff3ead" />
added PCB art to the front thts it for now

## 10 Oct 2026- 0.3h logged
### Day 4 
Thats it the PCB is done . i really need to work on the firmware later on , i think the pcb doest need any more change so i can export the gerber files and drill files tmrw and start workin o thee firmware
<img width="726" height="515" alt="image" src="https://github.com/user-attachments/assets/6b9d858e-c9eb-4842-92ec-648e2b3ee4df" />
<img width="823" height="488" alt="image" src="https://github.com/user-attachments/assets/f8de2d19-f8ed-421f-8393-bddb0f2f7ec0" />

## 11 Oct 2026 - 1.05h logged
Worked on the Animation Art 
lapse link - [https://lapse.hackclub.com/timelapse/GH1mBgfXfA9p](https://lapse.hackclub.com/timelapse/GH1mBgfXfA9p)

## 11 Oct 2026 0.2h logged 
Today i started writing the firmware for the Desk pet , im very bad at firmware so im just doin the basics now and i hope ill learn it before the build week . i installed platform.io extension in vs code and started working on the art online<img width="32" height="32" alt="image" src="https://github.com/user-attachments/assets/73009243-63db-4e84-92e9-070c8ad1983c" />

<img width="32" height="32" alt="image" src="https://github.com/user-attachments/assets/d8f30d73-8a4e-4eae-b758-9479f181f384" />

<img width="1365" height="719" alt="image" src="https://github.com/user-attachments/assets/4c625457-8c90-48a8-b8e1-792faf86e5c2" />

### thats it byeee
