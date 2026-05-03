# desktop_trashcan

A simple trashcan that mounts on the edge of your desk and opens and closes with the press of a button.
<img width="1025" height="1141" alt="image" src="https://github.com/user-attachments/assets/fee67764-f35a-4c77-9623-3d927463e764" />
<img width="1787" height="900" alt="image" src="https://github.com/user-attachments/assets/b0c8068d-2d34-4003-8f01-4d0d56d4d1b5" />

**BOM:**
- Arduino UNO R3
- Push button
- MG90S Micro servo
- 9V Battery + DC adapter clip
- Wires
- 3D printer + filament (PLA)
    - Print trashcan_body with supports
    - Print trashcan_lid with no supports

**Assembly (images coming soon):**
- Slide the 9 volt battery into the compartment on the bottom of trashcan_body
- Snap the battery connector onto the battery and plug in the Arduino UNO R3
- Remove Arduino UNO R3 from plastic casing (if applicable) and place Arduino on pegs on the side of the Arduino
- Slide the button into place, threading the wires through the hole and connecting them to appropriate pins on the Arduino (see schematic), glue if necessary
- Place MG90S micro servo on the platform by the top
- Align trashcan_lid with the top of the can and glue the servo horn to the lid
- Finish wiring
- Upload firmware (make sure 9 volt battery is unplugged when the Arduino is plugged into your computer)
- Slide the body onto the side of your desk!
