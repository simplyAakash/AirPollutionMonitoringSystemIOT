# AirPollutionMonitoringSystemIOT
Air pollution is the biggest problem of every nation, whether it is
developed or developing. Health problems have been growing at faster rate
especially in urban areas of developing countries where industrialization
and growing number of vehicles leads to release of lot of gaseous
pollutants.IOT Based Air Pollution Monitoring System monitors the Air
quality and will trigger an alarm when the air quality goes down beyond a
certain threshold level, means when there are sufficient amount of harmful
gases present in the air like CO2, smoke, alcohol, benzene, NH3, LPG and
NO. It will show the air quality in PPM on the LCD and also send a alert
message to the users Whatsapp number when the PPM value goes
beyond a threshold level.The system can be installed anywhere but mostly
in industries and houses where gases are mostly to be found and gives an
alert message when the system crosses threshold limit



-->HARDWARE COMPONENT DETAILS

ARDUINO UNO
WIFI Module (ESP8266)
Jumper Cables
LCD (Liquid Crystal Display)
BUZZER

-->SENSOR DETAILS

MQ-135 Sensor


-->SOFTWARE DETAILS IDE AND TOOLS
Arduino IDE
Python IDLE
PySerial

Circuit Diagram Explanation
First we connect the ESP8266 with the Arduino. ESP8266 runs on 3.3V
and if you give it 5V from the Arduino then it won’t work properly and it may
get damaged. Connect the VCC and the CH_PD to the 3.3V pin of Arduino.
The RX pin of ESP8266 works on 3.3V and it will not communicate with the
Arduino when we connect it directly to the Arduino. We make a voltage
divider for it which will convert the 5V into 3.3V. This can be done by
connecting three resistors in series . Connect the TX pin of the ESP8266 to
the pin 10 of the Arduino and the RX pin of the esp8266 to the pin 9 of
Arduino through the resistors.Connect the VCC and the ground pin of the
MQ135 sensor to the 5V and ground of the Arduino and the Analog pin of
sensor to the A0 of the Arduino.Connect a buzzer to the pin 8 of the
Arduino which will start to beep when the condition becomes true.
Finally we connect the LCD to the Arduino.Connect pin 1 (VEE) to the
ground.Connect pin 2 (VDD or VCC) to the 5V.Connect pin 3 (V0) to the
middle pin of the 10K potentiometer and connect the other two ends of the
potentiometer to the VCC and the GND. The potentiometer is used to control
the screen contrast of the LCD. Connect pin 4 (RS) to the pin 12 of the
Arduino.Connect pin 5 (Read/Write) to the ground of Arduino.Connect pin 6
(E) to the pin 11 of the Arduino. The RS and E pin are the control pins which
are used to send data and characters.Connect pin 11 (D4) to pin 5 of
Arduino.Connect pin 12 (D5) to pin 4 of Arduino.Connect pin 13 (D6) to pin 3
of Arduino.Connect pin 14 (D7) to pin 2 of Arduino.Connect pin 15 to the VCC
through the 220 ohm resistor. Connect pin 16 to the Ground.
