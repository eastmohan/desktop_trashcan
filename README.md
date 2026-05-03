# desktop_trashcan

A simple trashcan that mounts on the edge of your desk and opens and closes with the press of a button. I made this project because my desk is always full of stuff like eraser dust and I don't have space for a trashcan. I made the mounting part chamfered so you can easily sweep debris in, and the way the trashcan is designed, it should go on the back or side of the desktop. I also wanted to challenge myself to make something useful using only components I had already.
<img width="1025" height="1141" alt="image" src="https://github.com/user-attachments/assets/fee67764-f35a-4c77-9623-3d927463e764" />
<img width="1778" height="756" alt="Screenshot 2026-05-03 125854" src="https://github.com/user-attachments/assets/8ce31865-aca2-4f75-a0bf-c22dbeb027bd" />

**BOM:**

| Part | Link |
| -------- | -------- |
| Arduino UNO R3  | [Link](https://store-usa.arduino.cc/products/arduino-uno-rev3?utm_source=google&utm_medium=cpc&utm_campaign=US-Pmax&gad_source=1&gad_campaignid=21317508903&gbraid=0AAAAACbEa86bJAK7MHh4p5xtQBBS8voWw&gclid=CjwKCAjw5NvPBhAoEiwA_2egftQ-3tBX56F0lAox_c7iEJP3t6O4a5rSvrXrwDZJsRLYrWQf9_e-5BoC9AIQAvD_BwE)  | 
| Push button  | [Link](https://www.addicore.com/products/large-tact-push-button-switch-12-x-12-x-7-2mm?variant=45731917693245&country=US&currency=USD&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic&srsltid=AfmBOoqEnuTTUo4MRYsEhrhZu0iyKt1PNfGbVRDTNal_gPa0lRXAY-wN8hA&com_cvv=8fb3d522dc163aeadb66e08cd7450cbbdddc64c6cf2e8891f6d48747c6d56d2c)  |
| MG90S Micro servo (can use plastic gear one if you find the same size) | [Link](https://www.amazon.com/Miuzei-Geared-Helicopter-Arduino-Project/dp/B0BWJ4RKGV?th=1)  |
| 9V Battery DC Connector | [Link](https://www.ledsupply.com/accessories/9v-battery-connector-with-plug?gad_source=1&gad_campaignid=23653825357&gbraid=0AAAAAD_pPfhPHe4G3cxR9SNquYvGyFKrq&gclid=CjwKCAjw5NvPBhAoEiwA_2egfiV7N50KZp6cGxHjFE1UBXP5fPaRTOj9WN1dgw6Fd5l2wSSXeIS06hoCa7AQAvD_BwE)|
| 9V Battery | [Link](https://www.target.com/p/energizer-max-9v-cell-batteries-8211-alkaline-battery/-/A-89100810?sid=1142S&ref=tgt_adv_xsp&AFID=google_pla_df&fndsrc=tmnv&DFA=23806033386&CPNG=PLA_DVM%2Ba06Do000000WGHsIAO-Energizer_ROV_Google_Search_Q2_2026-1855630&adgroup=PLA_CMP-licensed&LID=5143198495pgs&network=g&device=c&location=9008136&gclsrc=aw.ds&gad_source=1&gad_campaignid=23806033386&gbraid=0AAAAAD-5dfYlJz0fCtXaHzIuFZDNYVBX0&gclid=CjwKCAjw5NvPBhAoEiwA_2egfunFOSpwhhFUpZajP9_aXRUOvE6o6eR3AowqwCtzEBqUqiG3fEcMBhoCqu0QAvD_BwE)|
| Wires | [Link](https://www.amazon.com/Elegoo-EL-CP-004-Multicolored-Breadboard-arduino/dp/B01EV70C78) |
| trashcan_body (print with supports) | [Link](https://github.com/eastmohan/desktop_trashcan/blob/main/CAD/trashcan_body.stl) |
| trashcan_lid (no supports) | [Link](https://github.com/eastmohan/desktop_trashcan/blob/main/CAD/trashcan_lid.stl) |

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
