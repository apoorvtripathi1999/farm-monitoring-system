# farm-monitoring-system
The farm monitoring system is a mixture of hardware and software additives. The hardware part includes embedded systems and software program is the Arduino ide.The Arduino ide displays readings from sensors are inserted using the hardware.The special sensors used are temperature and humidity sensor,pir sensor and soil moisture 
sensor. The facts gathered with the aid of the sensors is sent to the Arduino UNO microcontroller ATmega328.The gathered information may be displayed in a Arduino IDE. A GSM module is hooked up with the Arduino to facilitate messaging service which updates the farmers each 10 seconds approximately the climate conditions of the subject.
IV.HARDWARE USED
This project is aided with many hardwares. This proposed technology is an amalgamation of different sensors, microcontroller and communication medium to help the farmers to work on their farms.

A.Arduino uno

Arduino is a microcontroller to control the working of the sensors and manage the working of the device. The Uno version of Arduino is implemented in this project. It was developed by Arduino CC. The Arduino board comes with various number of pins. The pins are categorized as output and input pins. The input pins ac cepts digital as well as analog pins. It has 14 digital pins and 
6 analog pins. It accepts 7 to 20 volts of power for working. It also has an USB port. The Uno was the first version of Arduino to be introduced in the Arduino family. 

B.DHT11 Temperature And Humidity Sensor

The DHT11 Temperature And Humidity sensor is used to sense temperature and humidity present in the atmosphere. It has 3 pins generally. One pin is used for transmitting signals, the next pin is used to receive signals and the last pin is data transfer. It can be used for prolonged time period. It gives approximate results. It regularly sends information to Arduino Uno. The information
consists the signals which contain the values gathered about temperature and humidity. It is reliable on nature. It gives a very fast response. 

C.Soil Moisture sensor

The Soil Moisture sensor is used to sense moisture content in the soil. It checks the volume of water content or moisture present in the soil. The calculations are done in the soil moisture sensor through coefficients. It estimates the volume of water content in the soil. It detects the water content in the soil and gets and sends the analog signals which is shown digitally. It transmits
the the signals containing information or data or values of the condition of soil to Arduino to futher process it and display.

D.PIR Sensor

PIR sensor stands for Passive Infrared Sensor. It detects the movement around it and sends the signals accordingly. It radiates electromagnetic radiation. If any object comes within the range of tgis radiated electromagnetic radiation, the it hits the object and comes b ack to the PIR sensor telling that there is presence of an object in a specified range. An led or Buzzer can be attached
with PIR sensor so that the hindrance can be detected easily or the user will know of the hindrance ealisy.
It will help the farmer to see if any animal has broken into field and is destroying  crops. In this way the farmer can save his crops and lead to betterment in the quality of the crops. PIR sensor is used in burglar system also to detect if thieves have entered into an infrastructure. It is also called as PID.

E.GSM Shield

The GSM Shield is used as a method of communication in this proposed technology. The GSM Shield is sed to send text messages to the farmer’s cell phone about the conditions of the temperature, humidity soil and field area. A separate coding has to be done for gsm shield in Arduino. It needs a sim to implement it. The number of the sim has to be fed in the coding. The number would belong to
farmer to which the messages has to be sent. The values detected and transmitted by the sensors to Arduino is sent by the gsm to the cell phone. Hence it uses a network which does not require internet and overcpmes the biggest loop hole of projects of this domain. 
It can also be used to make voice calls. It is bas3d on radio modem M10 Quectel. It incorporates AT Commands. It also has several pins to connect to. It uses TCP and UDP protocol for sending data packets. It uses HTTP which is HyperText Transfer Protocol.


The Farm Monitoring System can be used for destiny factors of agriculture. This would be a relief for farmers since it decreases the load of manual efforts A gadget to      screen moisture levels within the soil changed into constructed and the assignment furnished an possibility to take a look at        the prevailing structures, at the side of their features anddownsides. The stated gadget 
may be used to turn on/off the water sprinkler in keeping with soil moisture levels thereby automating the technique of 
irrigation that is one of the most time ingesting activities in farming. Agriculture is one of the most effort-consuming hobby.     The device makes use of statistics from soil moisture sensors to irrigate soil FUTURE SCOPE
The proposed assignment may be further greater with the aid of including pump to  the       machine to facilitate computerized irrigation. The automated irrigation  device may be triggered when the moisture      content of the soil is going under the brink       stage.  The threshold degree can be decided    in the code written for Arduino. So whenever the fee for moisture goes under the brink
degree, the pump gets mechanically on and       irrigation is performed to an ok  degree.To improve the efficiency and 
effectiveness of the machine, the noted recommendations can be placed into attention. Alternative of controlling the water pump may be given to the farmer by way of which they are able to turn on or off the pump to be able to start or prevent the manner of irrigation without being there on     farm at that gift time. The farmer can know   earlier about the negative climate situations. In such 
instances farmer might also want to    forestall the machine remotely or routinely. The concept of the usage of IOT for 
irrigation can be prolonged in addition to  other tasks in farming together with farm   animals management, fireplace detection and climate manage.This could limit human intervention in   farming sports.
#For opening 
1. Download Arduino Ide from https://www.arduino.cc/en/Main/Software .
2. Import the  	DHT ,GSM_GPRS_GPS_Shield_GSMSHIELD libraries(copy and paste the folder to the library folder of the directory of your arduino ide).
3. open the arduino_code.ino file .
