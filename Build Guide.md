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



## 3. Electronics
### 3.1 Diodes
Take your PCB and put it flat on the table with the MCU annotation facing downwards (back side up). You can now see markings like SW19 under which there are two small metal pads surrounding an arrow. These are where your diodes go on.
Peel a diode out of the reel and have a look at the markings on it. You will find a finely engraved line towards one side, and this side has to face in the direction of the arrow on the PCB.
// diode placement image
Once you've figured out the orientation, apply a small amount of solder to one of the two pads. Do this by touching the pad with the iron for about a second, then touching the pad and iron simultaneuosly with the solder wire while keeping the iron on the pad. The quickest way is to do this for all diode footprints in one go (always only one pad per footprint). See the video demonstration below:
// diode pad video

Now solder the diodes on. Grab a diode with the tweezers, press it onto the PCB, heat the solder with the iron and slide the diode leg into the molten solder. Take the iron off and then the tweezers of. Always check diode orientation. Video demonstration below.
// diode solder video

Finally, solder the other diode legs to their pads. The solder should nicely coat the legs as well as pads.

### 3.2 Hotswap Sockets
Grab the hotswap sockets and insert the little knobs on them into the holes next to the square pads (PCB back side up). Make sure that no part of the hotswap socket blocks the larger middle hole (see images).
// socket photo
Now, touching pad and socket leg with the iron apply some solder so that the pad and the leg get nicely coated. Video demonstration below. Do this with all hotswap sockets.
// socket solder video

### 3.3 MCU Test
Before touching the MCU, touch a large metal object or water tap/radiator to prevent static discharge. Then unpack the MCU (probably a pro micro/equivalent) and hook it up to your computer. Assuming you have QMK Toolbox installed (otherwise, do so: https://github.com/qmk/qmk_toolbox), select a random keymap from the drop down menu, set the MCU into bootloader mode by connecting the GND and RST pins once or twice quickly in succession with e.g. solder wire and hit "flash". If everything works fine, great! You can continue. If not, don't continue and try to fix that first (this is a bit beyond this guide).

### 3.4 MCU Soldering
If you've successfully flashed the MCU, turn your PCB around so that the soldered components now face downwards. Put the PCB onto a small box or so as shown in the picture.
//elevated image

First, stick some tape between the hole rows on the PCB. Place the MCU facing upwards onto the PCB.
//MCU on PCB

Stick the first pair of header pins with the short end through the PCB and aligned MCU from the bottom.
//header pins

Put the PCB back in place and carefully solder the pins to the MCU holes. Do the same with the second row of header pins.
//MCU solder

You should now have a gap between the PCB and the black plastic of the header pins. Cut through this gap with flush cutters. See images.
//flushcut1
//flushcut2
//flushcut3

Now solder the pins to the PCB from the bottom side.

### 3.5 Joystick
Fit the joystick into the footprint on the top (MCU) side of the PCB at the bottom. Just make sure the holes all line up with the joystick pins and press it in. Solder from the bottom side, 14 pins in total.
//joystick1,2,3

## 4. Switchplate
//introswitchplate
Now stick the gasket strips onto the ledges on your plate. 6 on top, 6 on the bottom. Carefully peel of the grey gasket material from the orange paper. Be carefuly to not pull of the glue, the paper should be shiny when you pull it off. Can be a bit finnicky. See images.
This is how it should look.
//gasketcorrect
This is how it should not look.
//gasketwrong
Here you can see the glue layer.
//gluelayer
Stick the gasket pieces to the appropriate places.
//gasketfitted
Now press in your switches. See how the plate aligns with the PCB, and makes sure that the switch pins face north. You can flip the plate around, it's symmetric.
//switchespressed
Now make sure that all switch pins stick out nice and straight.
Now carefully press the switchplate onto the PCB starting around the edges. Make sure the switches sit all flush on the PCB.
//switchestopcb

## 5. Acrylic and Screws
//acrylicintro
Working in a clean environment, clean all parts and peel of the protective coverings on both sides of the acrylic sheets. Grab acrylic part A and stick 8 screws through the holes. Then loosely screw 8 stand-offs onto these screws.
//standoffs
Now stack the acrylic layers in the order B-C on top. Then place the switchplate with PCB on it onto the layers so that the ledges sit in the cutouts of the acrylic.
//assembly
Finally, add layer D on top and screw 8 screws into the holes and stand-offs. Voilà!
Send me a nice picture of your board to add at this point:)
lalitmistry1407@gmail.com

## 6. QMK Setup
Now head to your computer. Setup QMK: https://docs.qmk.fm/#/newbs_getting_started.
Navigate to your qmk_firmware folder (should be in the user directory), and look in the "keyboards" folder for "Edinburgh41". You can find instructions in the "readme.txt" there for tweaking your firmware.

I hope you enjoyed this build and that this board serves you long and well:)






