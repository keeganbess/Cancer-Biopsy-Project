# Production Release Cancer Biopsy Project

## Usability
This project had issues programming the microchip of the new PCB due to design issues however, through earlier builds on a breadboard we were able to prove that the design of this medical device could rely on stall conditions to stop the motor in between phases of the code. The main parts of this design are the voltage regulator, the current sensors, the new microcontroller and motor driver. While we weren’t able to work with the code on the new PCB of this design, we still made updates to the design of the earlier device by altering the motor and the battery circuit.  

<img width="830" alt="Screen Shot 2022-04-06 at 11 48 49 AM" src="https://user-images.githubusercontent.com/78036141/162015425-8414b08f-2ec1-4128-bad1-e3d22eb71492.png">

This device has a fairly intuitive and easy to use design, working off of a state diagram with four stages: standby, cutting, removal and exit. There is a switch on the PCB on inside of the bottom housing that turns on the device and this is indicated by the LED illuminating. With the motor turned off, we are in the standby state. Then when the button is pressed, the device will start its cutting phase where the motor will spin clockwise and the vacuum within the syringe will hold the cut sample. When it reaches the full motion of the syringe and the magnet passes the first hall effect sensor, the motor will stop. In the new PCB this stopping of the motor is done through reading the current of the motor through a current sensor, when the motor begins to stall, the current will spike and the microchip will turn off the motor. With the motor stopped, we are in the removal phase where we can remove the needle from the body. In order to extract the sample we will hit the button again and the motor will spin in the counterclockwise direction until the magnet passes the second hall effect sensor. This is the end of the procedure. 

The design of the housing that the user mainly interacts with is the switch and the button. Limiting the amount of control options available to the user ensures an easier design to work with. Occasionally, the user will have to charge the battery which we have a rechargeable circuit connected to the motor. This will require unscrewing the cover and plugging the battery into the charger.  As a handheld medical device, the footprint of the design should be small and easy to hold which our device is. Also the shape of the exterior houses is rounded which has been shown to be the ideal shape for a handheld device. With basic instructions, the device should be intuitive and user tasks will be inserting, pressing the button, extracting, and adding/removing the syringe. With the syringe being removable, the device is reusable for many different extractions.


## Build Quality
With the prior prototype we have been extracting sample tissue from the gelatin phantom. As we are aiming to work with prostate tissue, we have been altering the stiffness of the gelatin phantom used in prior tests where the focus was breast cancer. The motor is now a 6V motor with the intention to increase the linear speed of our extractions to 20 mm/s and 450 rpm so that we could extract the stiffer tissue sample. The syringe that we have been using doesn’t seem to be extracting perfect samples due to the decreased friction of the stopper in the syringe so the vacuum created isn’t ideal. When we tested with a smaller barrel syringe, the device extracted samples around 15-20mm in size. 

<img width="428" alt="Screen Shot 2022-04-06 at 6 46 41 PM" src="https://user-images.githubusercontent.com/78036141/162085020-66d0f41b-0257-4ad3-87de-0804a045d259.png">

<img width="427" alt="Screen Shot 2022-04-06 at 6 45 39 PM" src="https://user-images.githubusercontent.com/78036141/162084864-b3faa03c-53b3-4139-98fe-f98bac0776d3.png">

The extraction process didn’t run as smoothly as we would like, specifically parts of the sample had to be manually removed from the needle. There is enough power supplied to run the motor and cut samples, however, it still is not the speed we would like to be seeing in order to extract a better sample. The code itself runs as expected so we instead are aiming to increase the power supplied so that the process will run faster. The exterior housing is 3D printed and sturdy. When put together and the motor is screwed into its compartment, nothing moves around inside of the housing. The PCB is glued to the botom and the 6 pin connector is slid underneath the center console with just enough room to fit. With the motor soldered to stranded wire an the incluion of heat shrink on joints, the device itself is secure. 


## Vertical Features
# Production Release Cancer Biopsy Project

## Usability
This project had issues programming the microchip of the new PCB due to design issues however, through earlier builds on a breadboard we were able to prove that the design of this medical device could rely on stall conditions to stop the motor in between phases of the code. The main parts of this design are the voltage regulator, the current sensors, the new microcontroller and motor driver. While we weren’t able to work with the code on the new PCB of this design, we still made updates to the design of the earlier device by altering the motor and the battery circuit.  

<img width="830" alt="Screen Shot 2022-04-06 at 11 48 49 AM" src="https://user-images.githubusercontent.com/78036141/162015425-8414b08f-2ec1-4128-bad1-e3d22eb71492.png">

This device has a fairly intuitive and easy to use design, working off of a state diagram with four stages: standby, cutting, removal and exit. There is a switch on the PCB on inside of the bottom housing that turns on the device and this is indicated by the LED illuminating. With the motor turned off, we are in the standby state. Then when the button is pressed, the device will start its cutting phase where the motor will spin clockwise and the vacuum within the syringe will hold the cut sample. When it reaches the full motion of the syringe and the magnet passes the first hall effect sensor, the motor will stop. In the new PCB this stopping of the motor is done through reading the current of the motor through a current sensor, when the motor begins to stall, the current will spike and the microchip will turn off the motor. With the motor stopped, we are in the removal phase where we can remove the needle from the body. In order to extract the sample we will hit the button again and the motor will spin in the counterclockwise direction until the magnet passes the second hall effect sensor. This is the end of the procedure. 

The design of the housing that the user mainly interacts with is the switch and the button. Limiting the amount of control options available to the user ensures an easier design to work with. Occasionally, the user will have to charge the battery which we have a rechargeable circuit connected to the motor. This will require unscrewing the cover and plugging the battery into the charger.  As a handheld medical device, the footprint of the design should be small and easy to hold which our device is. Also the shape of the exterior houses is rounded which has been shown to be the ideal shape for a handheld device. With basic instructions, the device should be intuitive and user tasks will be inserting, pressing the button, extracting, and adding/removing the syringe. With the syringe being removable, the device is reusable for many different extractions.


## Build Quality
With the prior prototype we have been extracting sample tissue from the gelatin phantom. As we are aiming to work with prostate tissue, we have been altering the stiffness of the gelatin phantom used in prior tests where the focus was breast cancer. The motor is now a 6V motor with the intention to increase the linear speed of our extractions to 20 mm/s and 450 rpm so that we could extract the stiffer tissue sample. The syringe that we have been using doesn’t seem to be extracting perfect samples due to the decreased friction of the stopper in the syringe so the vacuum created isn’t ideal. When we tested with a smaller barrel syringe, the device extracted samples around 15-20mm in size. 

<img width="428" alt="Screen Shot 2022-04-06 at 6 46 41 PM" src="https://user-images.githubusercontent.com/78036141/162085020-66d0f41b-0257-4ad3-87de-0804a045d259.png">

<img width="427" alt="Screen Shot 2022-04-06 at 6 45 39 PM" src="https://user-images.githubusercontent.com/78036141/162084864-b3faa03c-53b3-4139-98fe-f98bac0776d3.png">

The extraction process didn’t run as smoothly as we would like, specifically parts of the sample had to be manually removed from the needle. There is enough power supplied to run the motor and cut samples, however, it still is not the speed we would like to be seeing in order to extract a better sample. The code itself runs as expected so we instead are aiming to increase the power supplied so that the process will run faster. The exterior housing is 3D printed and sturdy. When put together and the motor is screwed into its compartment, nothing moves around inside of the housing. The PCB is glued to the botom and the 6 pin connector is slid underneath the center console with just enough room to fit. With the motor soldered to stranded wire an the incluion of heat shrink on joints, the device itself is secure. 


## Vertical Features
While the PCB was unable to be programmed to test with the device, from the alpha and beta build testing we were able to prove that using stall conditions we can stop the motor. Being able to stop the motor based on its stalling will help to indicate whether there is the presence of cancer or some blockage during the procedure prior to extraction. This will be useful as it will reduce the amount of extractions needed during a typical biopsy, if there was to be a blockage immediately present. The states of the diagram are able to be tested using the button and noting the direction the motor is turning. 

Testing on a breadboard did work so it is possible we just need minor adjustments to the PCB before purchasing another version. With the addition of the current sensor, we are able to detect the stall current which allows for the microchip to stop the motor upon reaching full range of motion or some source of blockage. We switched to the 6V motor even though we are supplying 9 volts in an attempt to increase the power and speed of the motor to the 20mm/s which is the minimum speed needed for extraction. This was successful in obtaining samples and we did have a zero percent zero biopsy rate but the samples had deformities and were not the size we were looking for. Despite this, obtaining samples is an improvement from the prior prototype which was unable to extract tissue from the stiffer gelatin sample. 


## Repository Link
github: https://github.com/keeganbess/Cancer-Biopsy-Project.git


## Repository Link
github: https://github.com/keeganbess/Cancer-Biopsy-Project.git
