//include libraries
#include <dht.h>
#include <SoftwareSerial.h>

//define pins
#define dht_apin A0 // Analog Pin sensor is connected 
SoftwareSerial mySerial(7,8);//serial port of gsm
const int sensor_pin = A1;  // Soil moisture sensor O/P pin
int pin_out = 9;
//allocate variables
dht DHT;
int c=0;

void setup()
{
pinMode(2, INPUT); //Pin 2 as INPUT
pinMode(3, OUTPUT); //PIN 3 as OUTPUT
pinMode(9, OUTPUT);//output for pump
}
void loop()
{
  if (digitalRead(2) == HIGH)
  {
  digitalWrite(3, HIGH);   // turn the LED/Buzz ON
  delay(10000);  // wait for 100 msecond 
  digitalWrite(3, LOW);   // turn the LED/Buzz OFF
  delay(100);
  }
   Serial.begin(9600);
     delay(1000);
    DHT.read11(dht_apin); //temprature
  float h=DHT.humidity;
  float t=DHT.temperature; 
    delay(5000);
    Serial.begin(9600);
     float moisture_percentage;//moisture
  int sensor_analog;
  sensor_analog = analogRead(sensor_pin);
  moisture_percentage = ( 100 - ( (sensor_analog/1023.00) * 100 ) );
  float m=moisture_percentage;
  delay(1000);
  if(m<40)//pump
  {
  while(m<40)
  {
  digitalWrite(pin_out,HIGH);//open pump
  sensor_analog = analogRead(sensor_pin);
  moisture_percentage = ( 100 - ( (sensor_analog/1023.00) * 100 ) );
  m=moisture_percentage;
  delay(1000);
  }
  digitalWrite(pin_out,LOW);//closepump
  }
  if(c>=0)
  {
  mySerial.begin(9600);
  delay(15000);
  Serial.begin(9600);
  delay(1000);
  Serial.print("\r");
  delay(1000);                  
  Serial.print("AT+CMGF=1\r");    
  delay(1000);
  Serial.print("AT+CMGS=\"+XXXXXXXXXX\"\r"); //replace X with 10 digit mobile number    
  delay(1000);
  Serial.print((String)"update->"+(String)"Temprature="+t+(String)"Humidity="+h+(String)"Moisture="+m);
  delay(1000);
  Serial.write(0x1A);
  delay(1000); 
  mySerial.println("AT+CMGF=1");//Sets the GSM Module in Text Mode
  delay(1000);
  mySerial.println("AT+CMGS=\"+XXXXXXXXXX\"\r"); //replace X with 10 digit mobile number    
  delay(1000);
  mySerial.println((String)"update->"+(String)"Temprature="+t+(String)"Humidity="+h+(String)"Moisture="+m);//message format
  mySerial.println();
  delay(100);
  Serial.write(0x1A);
  delay(1000);
  c++;
    
    }
    
  
}
