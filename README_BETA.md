# Cancer-Biopsy-Project

## Usability

This project’s beta build will include the finalized PCB that we have established in the schematic prior. In our alpha build, we worked with testing individual parts to ensure that the pcb design would operate as intended. This included working with specific individual parts such as the motor driver(DRV8838), the new microchip(ATmega32U4), and the current sensor(INA219). Below are the results from just being able to read the current and manually stalling the motor.

**![](https://lh3.googleusercontent.com/gtyTFwp358X97ClQexzDZ87Znb1_DIrydGqU9oeTFLuhAT1m54LP2rPFQf2Wajo3A23ePu1FpNWhNgHFZgjTv-zpdgM1Z8ofSSuC3Ca4OLaD0j53JEORTcTLQYgg5fOGCOTSJZEI)**
As with most motors, the stall current is significantly higher than the operating current which is what we will be working with in the code in order to turn the motor off. This was tested with fairly simple arduino code in order to just figure out relative values and current spikes. The software interface is being operated through Tkinter which is a python interface that allows serial communication with the PCB and the current arduino. With this we can read information like we see above. Specifically, we are working on being able to output velocity and direction to the serial interface that can aid in ensuring our model is working properly throughout our beta testing.


## Build Quality
As we tested with the individual components for the alpha build, we are prepared to buy the PCB for this beta build that we are waiting to arrive for testing. This PCB will follow the schematic that is currently on the GitHub repository.  The system with the breadboard worked as intended, stopping the motor once it stalled and being able to change position. For the alpha build we didn't use the buttons or the switches as those were implemented prior and will not have complications with the new changes. The alpha build was specifically built to ensure that the connections between the 3 main components: motor driver, microchip and current sensor, were working and met our expected behavior for the alpha build. 
**![](https://lh5.googleusercontent.com/xjDdHjqXn_VmNIbmdpzwZUBAvbAGBG_6HxzNptpFiGFqMdaUqhM222oqz2oOeZ-OoyqIMdgVv2NcAX40kjnCyPeILfodsT0tOkipye0soViWQpvMo3u_UhczCEueGQ8JDR7-7bzR)**
**![](https://lh5.googleusercontent.com/MZ1gviH3IHdy16IlnLXcwI0hOqio6XE72DLMyJX6WWGHQNPN9yBmZEUNLldduW58fqdsCMr6XhETu8cXVJsb47rYD7Ty6_KcgIJhuACSWtrQthXbICOkCORyJXPAi8ZRBd7F_cl9)**

 In terms of work from the other members of this team, there is still focus on the needle we are using, testing to see if there is a better needle for the cutting and extraction which will be implemented later in testing with the gelatin phantom.  There has been improvements with increasing the stiffness of the gelatin to more so match that of prostate tissue to ensure that our extractions with the device are comparable to a regular needle biopsy. 

When the PCB arrives we plan to alter the 3D printing of our current housing. We found during the alpha build that the parts were really difficult to get out, specifically the motor. Therefore, we want to research a better way to hold the motor into place but also make it easily accessible for the user to remove if need be. Also as we have a USB port in this implementation we need to have some ability to connect to a PC through the exterior housing which means creating some sort of hole in the bottom housing. 

## Vertical Features
From the alpha build testing, we have now ensured that the USB, microchip and current sensor can be used with this device and program. The current sensor, replacing the hall effect sensors eliminate the need for the hall effect sensor and magnet that were below the lead screw. This helps to minimize the amount of parts within the device as the INA219 is on the PCB and there is no other component needed in the middle housing.

The code for the microcontroller itself works through the same state diagram of standby, cutting, removal, and exit. The stall current of the motor is 750 mA. However as we were testing this motor with the current sensor we didn't reach that peak so we altered the constant value to 700mA. This shouldn't be a significant change as the working current of this motor was much lower so any spike significantly higher will indicate the motor is stalled. Once the current reaches a spike,  the microchip turns motor off. This stall indicates that the syringe has reached its full stroke for that motor direction and then when ready and the button is pressed, the motor will start up in the opposite direction using the motor driver inputs to extract counter clockwise. 

## Repository link
https://github.com/keeganbess/Cancer-Biopsy-Project.git

