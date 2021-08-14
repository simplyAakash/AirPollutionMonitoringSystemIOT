#include <MQ135.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11, 5, 4, 3, 2);
void setup(){ lcd.begin(16, 2);
Serial.begin(9600); // sets the serial port to 9600
}
void loop(){
MQ135 gasSensor = MQ135(A0);
float air_quality = gasSensor.getPPM();
if(air_quality>=1000)
{
Serial.println(air_quality); // prints the value read
}
lcd.setCursor(0,0);
lcd.print("ArQ=");
lcd.print(air_quality);
lcd.print(" PPM");
lcd.println(" ");
lcd.print(" ");
delay(1000); // wait 100ms for next reading
}