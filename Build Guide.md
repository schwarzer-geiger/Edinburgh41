# Edinburgh41 Build Guide
I would recommend reading the guide entirely before starting the build.
1. Parts List
2. Equipment
3. Electronics
3.1 Diodes
3.2 Hotswap Sockets
3.3 MCU Test
3.4 MCU Soldering
3.5 Joystick
4. Switchplate
5. Acrylic and Screws
6. QMK Setup

## 1. Parts List
- 1x Edinburgh41 PCB
- 40/41x N4148 Diodes SMD
- 40/41x Kailh/Gateron Hotswap Sockets
- 1x MCU (pro micro or equivalent)
- 1x Adafruit 2-axis Thumbstick
- Edinburgh41 Switchplate
- 4 Long Gasket Strips
- 8 Short Gasket Strips
- Acrylic Layers
- 16x 8mm M3 Screws
- 8x 12mm M3 Stand-offs
- 40x MX-style Switches
- Keycaps
- Cable

## 2. Equipment
- Soldering Station
- Solder
- Screwdriver depending on screws
- Thick tape
- Tweezers
- Flush Cutter

![setup](https://user-images.githubusercontent.com/70168374/153313995-9d1d92bc-ee0d-4718-b79b-23b59d335d31.jpg)


## 3. Electronics
### 3.1 Diodes
Take your PCB and put it flat on the table with the MCU annotation facing downwards (back side up). You can now see markings like SW19 under which there are two small metal pads surrounding an arrow. These are where your diodes go on.
Peel a diode out of the reel and have a look at the markings on it. You will find a finely engraved line towards one side, and this side has to face in the direction of the arrow on the PCB.

![diode placement](https://user-images.githubusercontent.com/70168374/153314042-c2b7610f-b1fb-42ae-a8bd-bef1ed7f5c82.jpg)

Once you've figured out the orientation, apply a small amount of solder to one of the two pads. Do this by touching the pad with the iron for about a second, then touching the pad and iron simultaneuosly with the solder wire while keeping the iron on the pad. The quickest way is to do this for all diode footprints in one go (always only one pad per footprint). See the video demonstration below:

https://youtu.be/VRkQUCjomuU

Now solder the diodes on. Grab a diode with the tweezers, press it onto the PCB, heat the solder with the iron and slide the diode leg into the molten solder. Take the iron off and then the tweezers of. Always check diode orientation. Video demonstration below.

https://youtu.be/gW2dpyB_Uc8

Finally, solder the other diode legs to their pads. The solder should nicely coat the legs as well as pads.

### 3.2 Hotswap Sockets
Grab the hotswap sockets and insert the little knobs on them into the holes next to the square pads (PCB back side up). Make sure that no part of the hotswap socket blocks the larger middle hole (see images).

![diode placement](https://user-images.githubusercontent.com/70168374/153314364-feb80c29-4349-4ed5-8c9f-61ce5ca96d0e.jpg)

Now, touching pad and socket leg with the iron apply some solder so that the pad and the leg get nicely coated. Video demonstration below. Do this with all hotswap sockets.

https://youtu.be/7WQaMCnWPGA

### 3.3 MCU Test
Before touching the MCU, touch a large metal object or water tap/radiator to prevent static discharge. Then unpack the MCU (probably a pro micro/equivalent) and hook it up to your computer. Assuming you have QMK Toolbox installed (otherwise, do so: https://github.com/qmk/qmk_toolbox), select a random keymap from the drop down menu, set the MCU into bootloader mode by connecting the GND and RST pins once or twice quickly in succession with e.g. solder wire and hit "flash". If everything works fine, great! You can continue. If not, don't continue and try to fix that first (this is a bit beyond this guide).

### 3.4 MCU Soldering
If you've successfully flashed the MCU, turn your PCB around so that the soldered components now face downwards. Put the PCB onto a small box or so as shown in the picture.

![elevated](https://user-images.githubusercontent.com/70168374/153314459-8d580a7e-e620-4a70-b09a-c2bacac8f0ef.jpg)

First, stick some tape between the hole rows on the PCB. Place the MCU facing upwards onto the PCB.

![MCU on PCB](https://user-images.githubusercontent.com/70168374/153314494-d38e6850-67e2-4260-99cc-5ceab339f2aa.jpg)

Stick the first pair of header pins with the short end through the PCB and aligned MCU from the bottom.

![header pins](https://user-images.githubusercontent.com/70168374/153314523-1bd2dc3c-3a2e-49de-9962-b5b776d95e65.jpg)

Put the PCB back in place and carefully solder the pins to the MCU holes. Do the same with the second row of header pins.

![MCU solder](https://user-images.githubusercontent.com/70168374/153314554-cccd6c40-a7e9-44dd-9a31-f51fc52079ff.jpg)

You should now have a gap between the PCB and the black plastic of the header pins. Cut through this gap with flush cutters. See images.

![flushcut1](https://user-images.githubusercontent.com/70168374/153314647-5181c294-1d02-4b4a-b72a-a25476a99412.jpg)
![flushcut2](https://user-images.githubusercontent.com/70168374/153314629-4878b8fb-5bef-4d57-a116-e5607ef760c0.jpg)
![flushcut3](https://user-images.githubusercontent.com/70168374/153314606-b5d5c817-93d7-4de1-88aa-895f985060a5.jpg)


Now solder the pins to the PCB from the bottom side.

### 3.5 Joystick
Fit the joystick into the footprint on the top (MCU) side of the PCB at the bottom. Just make sure the holes all line up with the joystick pins and press it in. Solder from the bottom side, 14 pins in total.

![joystick1](https://user-images.githubusercontent.com/70168374/153314691-23177f64-16eb-497a-892e-39ea06d9a675.jpg)
![joystick2](https://user-images.githubusercontent.com/70168374/153314699-3c7948cc-3e4c-4df7-9d2e-5e029dd66288.jpg)
![joystick3](https://user-images.githubusercontent.com/70168374/153314710-f7fb6e6f-7ff5-4038-92eb-22037973f69f.jpg)

## 4. Switchplate
//introswitchplate
Now stick the gasket strips onto the ledges on your plate. 6 on top, 6 on the bottom. Carefully peel of the grey gasket material from the orange paper. Be carefuly to not pull of the glue, the paper should be shiny when you pull it off. Can be a bit finnicky. See images.
This is how it should look.

![gasketcorrect](https://user-images.githubusercontent.com/70168374/153314736-44974de2-fbd4-400a-89ac-bf440ce7b1dd.jpg)

This is how it should not look.

![gasketwrong](https://user-images.githubusercontent.com/70168374/153314747-bc9234d0-888f-4b36-aa32-75f09530a23c.jpg)

Here you can see the glue layer.

![gluelayer](https://user-images.githubusercontent.com/70168374/153314758-da49fe98-99fb-4d48-9dad-999cbd78673e.jpg)

Stick the gasket pieces to the appropriate places.

![gasketfitted](https://user-images.githubusercontent.com/70168374/153314768-df57aa13-99da-4ced-b1a3-d7cd25868801.jpg)

Now press in your switches. See how the plate aligns with the PCB, and makes sure that the switch pins face north. You can flip the plate around, it's symmetric.

![switchespressed](https://user-images.githubusercontent.com/70168374/153314785-0a71029b-0260-4122-9bd9-f1df504ca366.jpg)

Now make sure that all switch pins stick out nice and straight.
Now carefully press the switchplate onto the PCB starting around the edges. Make sure the switches sit all flush on the PCB.

![switchestopcb](https://user-images.githubusercontent.com/70168374/153314801-53ea169e-397f-4d20-91d0-932f09ccff6e.jpg)

## 5. Acrylic and Screws
![acrylicintro](https://user-images.githubusercontent.com/70168374/153314822-070dc9da-64e3-40a1-aaa4-e7819715813e.jpg)

Working in a clean environment, clean all parts and peel of the protective coverings on both sides of the acrylic sheets. Grab acrylic part A and stick 8 screws through the holes. Then loosely screw 8 stand-offs onto these screws.

![standoffs](https://user-images.githubusercontent.com/70168374/153314836-200fbb9f-3fed-4443-9fca-a6f88ee9c9b0.jpg)

Now stack the acrylic layers in the order B-C on top. Then place the switchplate with PCB on it onto the layers so that the ledges sit in the cutouts of the acrylic.

![assembly](https://user-images.githubusercontent.com/70168374/153314847-3a3886e2-e693-4858-aad6-0138465fdd47.jpg)

Finally, add layer D on top and screw 8 screws into the holes and stand-offs. Voilà!
Send me a nice picture of your board to add at this point:)
lalitmistry1407@gmail.com

## 6. QMK Setup
Now head to your computer. Setup QMK: https://docs.qmk.fm/#/newbs_getting_started.
Navigate to your qmk_firmware folder (should be in the user directory), and look in the "keyboards" folder for "Edinburgh41". You can find instructions in the "readme.txt" there for tweaking your firmware.

I hope you enjoyed this build and that this board serves you long and well:)






