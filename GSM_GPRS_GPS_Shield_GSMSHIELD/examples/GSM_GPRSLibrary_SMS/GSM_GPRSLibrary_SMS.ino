#include "SIM900.h"
#include <SoftwareSerial.h>
//If not used, is better to exclude the HTTP library,
//for RAM saving.
//If your sketch reboots itself proprably you have finished,
//your memory available.
//#include "inetGSM.h"

//If you want to use the Arduino functions to manage SMS, uncomment the lines below.
#include "sms.h"
SMSGSM sms;

//To change pins for Software Serial, use the two lines in GSM.cpp.

//GSM Shield for Arduino
//www.open-electronics.org
//this code is based on the example of Arduino Labs.

//Simple sketch to send and receive SMS.

int numdata;
boolean started=false;
char smsbuffer[160];
char n[20];

//debug begin
char sms_position;
char phone_number[20]; // array for the phone number string
char sms_text[100];
int i;
//debug end


void setup()
{
    //Serial connection.
    Serial.begin(9600);
    Serial.println("GSM Shield testing.");
    //Start configuration of shield with baudrate.
    //For http uses is raccomanded to use 4800 or slower.
    if (gsm.begin(4800)) 
    {
        Serial.println("\nstatus=READY");
        started=true;
    } 
    else 
        Serial.println("\nstatus=IDLE");

    if(started) 
    {
        //Enable this two lines if you want to send an SMS.
        //if (sms.SendSMS("3471234567", "Arduino SMS"))
        //Serial.println("\nSMS sent OK");
       
       //if NO SPACE ,you need delte SMS  from position 1 to position 20
       //please enable this four lines
       //for(i=1;i<=20;i++)
       //{
           //sms.DeleteSMS(i);
       //}
    }
    
};

void loop()
{
    if(started) 
    {
        //Read if there are messages on SIM card and print them.
        sms_position=sms.IsSMSPresent(SMS_UNREAD);
        if (sms_position) 
        {
            // read new SMS
            Serial.print("SMS postion:");
            Serial.println(sms_position,DEC);
            sms.GetSMS(sms_position, phone_number, sms_text, 100);
            // now we have phone number string in phone_num
            Serial.println(phone_number);
            // and SMS text in sms_text
            Serial.println(sms_text);
        }   
        else
        {
            Serial.println("NO NEW SMS,WAITTING");
        }     
        delay(1000);
    }
};
