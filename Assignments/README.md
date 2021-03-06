# Cancer-Biopsy-Project

## Usability
This project’s alpha build is based on finalizing parts and connections for the schematic. All of the individual parts for this project have been purchased and the task now is ensuring that the schematic that has been created will work as intended. These parts include the voltage regulator, the current sensors, the new microcontroller, leds, a switch, a button, motor driver, resistors and capacitors. Other parts such as the battery and the motor are set to remain the same from the earlier design prototype so they can be removed from the exterior housing to test with this setup on the breadboard.  As of right now, the baseline code for our microchip is ready to be tested and is being waited on for the actual micro chip to be delivered.

Currently I am working with the Aruino Micro Board to check the state-diagram based code as it has the same microchip that we plan to use for the PCB of the actual design(ATmega32U4). This code is fairly intuitive as it reads the current value from the INA219, which will be the motor's current, and based on the state will stop the motor during the cutting and extraction state when the motor is stalled. Also in the works is a serial interaction between the microchip and a PC that will allow for the reading of current, velocity and force to be outputted in a terminal. These values will be useful for further testing of the device itself, specifically the current read from the sensor, as well as being able to vary different parameters to see their effect on the sample quality that is outputted for future studies.  

<img width="697" alt="Screen Shot 2022-01-20 at 6 29 44 PM" src="https://user-images.githubusercontent.com/78036141/150577848-e163cc3b-db40-48fb-8a27-3b8d0841d490.png">


## Build Quality
Before the PCB is purchased, our team wanted to ensure that the schematic designed is plausible and functional to prevent the need to purchase multiple PCBs. Therefore we have bought all of the parts and are working on connecting them with a breadboard, following the schematic that is in my github repository. We are still waiting on one motor driver from Pololu and the microchip to get here but meanwhile we have been working on improving other portions of the design that will help with testing and later patenting. Specifically there are works on the mechanical side of things to focus on the needle and the force at which the vacuum has on the extraction. Also there has been efforts to improve the stiffness of the testing gelatin that will later be used when we have the new PCB within the exterior housing. The stiffness is important to try to get it closest to actual tissue so that it properly demonstrates to others that it can in fact perform a needle biopsy with proper size and quality of samples. 

We are working on figuring out the size for the PCB to indicate if we need to work on remaking the design of the exterior housing which is 3D printed. However, our current prediction is that we shouldn’t have to alter the housing and we can reuse the same design as is present in the current prototype. The only difference is there will now be a USB port that needs to be accessed from outside of the device which will be worked on when we have the final PCB inside of the device. Below is what the exterior housing looks like at this current stage. 

<img width="630" alt="Screen Shot 2022-01-21 at 12 58 00 PM" src="https://user-images.githubusercontent.com/78036141/150576793-8084bf40-c3be-4d3c-8361-bb706671d60f.png">

## Vertical Features
When it is in the testing phase and if everything works as intended, then the new features to be implemented will have been the current sensors and the USB. The USB will make it much easier for the user to reprogram the device if there needs to be updates rather than taking apart the different housing and attaching to an Arduino Uno which is how it was done previously. The current sensors will eliminate the hall effect sensors and magnet that was beneath the lead screw, thus optimizing the device. The vertical feature that is still being implemented is a fairly new idea to display values of current, velocity and force through serial communication to a PC.

The code for the microcontorller itself works through the same state diagram of standby, cutting, removal, and exit. The change however is that it no longer is based on the hall effect sensors and is instead working with the INA219 to sense the current of the motor. Once the current reaches a spike, which is the stall current of the motor, the microchip will turn the motor off. This stall indicates that the syringe has reached its full stroke for that motor direction and then when ready and the button is pressed, the motor will start up in the opposite direction. 

## Repository link
https://github.com/keeganbess/Cancer-Biopsy-Project.git

