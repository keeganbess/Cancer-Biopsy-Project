# Release Candidate Cancer Biopsy Project

## Usability
The project beta build was based on finalizing and ordering the PCB for testing. Through continued testing with the circuit board of parts, this demo was able to show that the pcb design works and is possible to stop the motor based off of the stall current for the motor. The main parts include the voltage regulator, the current sensors, the new microcontroller, leds, a switch, a button, motor driver, resistors and capacitors. The code for our microchip is ready, however the PCB that was ordered was delayed but should come within the next week. 

<img width="746" alt="Screen Shot 2022-03-04 at 5 17 52 AM" src="https://user-images.githubusercontent.com/78036141/156744984-2294b995-2741-4643-b2c5-968c53888228.png">

The design of the exterior device itself demonstrates that it’s simple interface is user friendly. As a handheld medical device, the footprint of the design should be small and easy to hold which our device is. Also the shape of the exterior houses is rounded which has been shown to be the ideal shape for a handheld device. With basic instructions, the device should be intuitive as ultimately the only parts user tasks will be inserting, pressing the button, extracting, and adding/removing the syringe. With the syringe being removable, the device is reusable and ultimately saves money.

## Build Quality
Throughout the purchasing of the PCB there arose a few issues with different parts as due to the ongoing chip shortage, some parts were not available, specifically the AtMega32U4 which is a vital part of our board. Originally I had plans to use a different footprint of the chip for ease in the assembly process, however with those resources unavailable, I had to alter my design and layout to adjust for these issues. However regardless of footprint, the schematic design itself still works the same. I also from the last build changed around my USB, it is still a USB micro but with a different footprint to meet the clearance requirements. This PCB upon arrival will be tested for proper operation and placed in the exterior housing for testing with the needle and phantom gelatin. 

<img width="764" alt="Screen Shot 2022-03-04 at 5 18 29 AM" src="https://user-images.githubusercontent.com/78036141/156745088-98ca1e74-4ec0-4d7d-b98a-d1611901e1f0.png">

As we now know the dimensions of the PCB we are working to make changes to the 3D printed exterior housing to fit this new PCB in the bottom housing. In addition, we bought a new motor for this project(20D Pololu, 450 rpm). This new motor was ideal as it is small and should fit properly in the housing, even with the new edits and should be powered to reach the desired linear speed of the needle which is 20mm/s. 

## Vertical Features
From the alpha and beta build testing, we have now ensured that the USB, microchip and current sensor can be used for this device design. With the addition of the current sensor, we are able to detect the stall current which allows for the microchip to stop the motor upon reaching full range of motion. 
The code for the microcontroller itself works through the same state diagram of standby, cutting, removal, and exit. The stall current of the new motor is 2.9A with a stall torque of 2.0 kg-cm. After initial testing with the other 9V motor, it was evident that the motor was not being supplied with sufficient power to meet the linear speed of the needle. We have opted for a 6V motor and using the same rechargeable battery circuit as the previous builds, the new PCB allows for the motor to reach the 20mm/s which should be enough to cut samples from the now stiffer phantom tissue.

## Repository Link
github: https://github.com/keeganbess/Cancer-Biopsy-Project.git
