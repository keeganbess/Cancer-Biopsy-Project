# Production Release Cancer Biopsy Project

## Usability
This project had issues programming the microchip of the new PCB due to design issues however, through earlier builds on a breadboard we were able to prove that the design of this medical device could rely on stall conditions to stop the motor in between phases of the code. The main parts of this design are the voltage regulator, the current sensors, the new microcontroller and motor driver. While we weren’t able to work with the code on the new PCB of this design, we still made updates to the design of the earlier device by altering the motor and the battery circuit. 

<img width="830" alt="Screen Shot 2022-04-06 at 11 48 49 AM" src="https://user-images.githubusercontent.com/78036141/162015425-8414b08f-2ec1-4128-bad1-e3d22eb71492.png">


This device has a fairly intuitive and easy to use design, working off of a state diagram with four stages: standby, cutting, removal and exit. There is a switch on the PCB on the bottom housing inside that turns on the device and this is indicated by the LED illuminating. With the motor turned off, we are in the standby state. Then when the button is pressed, the device will start its cutting phase where the motor will spin clockwise and the vacuum within the syringe will hold the cut sample. When it reaches the full motion of the syringe and the magnet passes the first hall effect sensor, the motor will stop. In the new PCB this stopping of the motor is done through reading the current of the motor through a current sensor, when the motor begins to stall, the current will spike and the microchip will turn off the motor. With the motor stopped, we are in the removal phase where we can remove the needle from the body. In order to extract the sample we will hit the button again and the motor will spin in the counterclockwise direction until the magnet passes the second hall effect sensor. This is the end of the procedure. 

The design of the housing that the user mainly interacts with is the switch and the button. Limiting the amount of control options available to the user ensures an easier design to work with. Occasionally, the user will have to charge the battery which we have a rechargeable circuit connected to the motor. This will require unscrewing the cover and plugging the battery into the charger.  As a handheld medical device, the footprint of the design should be small and easy to hold which our device is. Also the shape of the exterior houses is rounded which has been shown to be the ideal shape for a handheld device. With basic instructions, the device should be intuitive and user tasks will be inserting, pressing the button, extracting, and adding/removing the syringe. With the syringe being removable, the device is reusable for many different extractions.

## Build Quality
With the prior prototype we have been extracting sample tissue from the gelatin phantom. As we are aiming to work with prostate tissue, we have been altering the stiffness of the gelatin phantom used prior when the focus was breast cancer. The motor is now a 6V motor with the intention to increase the linear speed of our extractions to 20 mm/s so that we could extract the stiffer tissue sample. The syringe that we have been using doesn’t seem to be extracting perfect samples due to the decreased friction of the stopper in the syringe so the vacuum created isn’t ideal. We will be trying with different syringes in the future but as of right now the samples that we have been extracting have minor deformities. The system itself doesn’t crash but the samples extracted by this device have not been perfect in size or shape. 
	This project itself doesn’t have any known issues besides the new PCB.



## Vertical Features

From the alpha and beta build testing, we have now ensured that the USB, microchip and current sensor can be used for this device design. With the addition of the current sensor, we are able to detect the stall current which allows for the microchip to stop the motor upon reaching full range of motion. 
The code for the microcontroller itself works through the same state diagram of standby, cutting, removal, and exit. The stall current of the new motor is 2.9A with a stall torque of 2.0 kg-cm. After initial testing with the other 9V motor, it was evident that the motor was not being supplied with sufficient power to meet the linear speed of the needle. We have opted for a 6V motor and using the same rechargeable battery circuit as the previous builds, the new PCB allows for the motor to reach the 20mm/s which should be enough to cut samples from the now stiffer phantom tissue.

## Repository Link
github: https://github.com/keeganbess/Cancer-Biopsy-Project.git
