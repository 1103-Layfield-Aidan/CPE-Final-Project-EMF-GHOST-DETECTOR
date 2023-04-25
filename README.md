# CPE-Final-Project-EMF-GHOST-DETECTOR
Final project for my CPE class. Electromagnetic Field (EMF) Detector built in Arduino. 
Layfield, Aidan 

The file "Arduino_EMF_Prot1" is the code for my first prototype and original design. The file "Project_EMF_Layfield_Aidan" is the code for my final design. Both are shown in the video.

This project is a challenge that was presented to me from Shawn in one of the labs (more so as a brief suggestion for a creative outlook). The idea was creating a "ghost detector" in Arduino, otherwise known professionally as an EMF detector. I decided to try and accomplish it in Arduino and it was more than possible. Electromagnetic field detectors, or EMF detectors, are devices used to detect and measure the strength of electromagnetic fields. EMFs are produced by various sources such as electrical appliances, power lines, wireless devices, and other electronic equipment. EMF detectors typically work by using sensors or antennas to detect changes in the electric and magnetic fields in the surrounding environment. Which all of this was more than provided in the Arduino kits we use for class. I created in the first prototype a simple design that gave an EMF reading using resistors and 10 LEDs. As more of the LEDs lit up, the more energy was being detected. In my final design I added a buzzer that makes a sound when energy is being detected (just like the real ghost detectors). I also added a 16x2 LCD display to give you a "ghost level" or level of energy being detected. I really enjoyed working on this project and can't wait for more challenges in the future!

Here is a brief description of what the code's function is: 

This code reads an analog value from a specified analog pin (A0) which is connected to an antenna or sensor that measures an electromagnetic field (EMF) level. The code then displays the EMF level on a 16x2 LCD module using the Arduino LCD library.

The LCD module is connected to Arduino pins 12, 11, 5, 4, 3, and 2, which are specified when initializing the LiquidCrystal object (lcd) in the setup() function. The LCD is used to display two lines of text: "EMF Level: " on the first line and "Last Hi EMF: " on the second line.

The analog value read from the antenna is stored in the variable 'val'. The code then updates the LCD display with the current EMF level by setting the cursor to the appropriate position and printing the value of 'val'. It also updates the 'high_emf' variable with the highest EMF level seen so far.

If the EMF level (val) is greater than or equal to 2, the code further processes the value by constraining it to a range of 2 to 100 using the constrain() function, and then mapping it to a range of 1 to 255 using the map() function. The resulting value is then used to control the brightness of an LED connected to pin 11 using the analogWrite() function. The buzzer connected to pin 6 is also turned on by setting its output to HIGH using digitalWrite().

If the EMF level is less than 2, the LED is turned off by setting its output to 0 using analogWrite(), and the buzzer is turned off by setting its output to LOW using digitalWrite().

The code also includes Serial communication at a baud rate of 9600, but it is not used in this specific code.

