///////////////////////////////////////////////////////////
//  Coded by Robinroy Peter    14/07/2016                //
///////////////////////////////////////////////////////////
String a;

void setup() {
    
    Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
    Serial2.begin(9600); //for blutooth module
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
}

void loop() {

    while(Serial2.available()) {
    
        a= Serial2.readString();// read the incoming data as string
        
        Serial.println(a);
    
    }
    if(a =="*1#"){
        digitalWrite(2,HIGH);
    }
    if(a =="*2#"){
        digitalWrite(3,HIGH);}
    if(a =="*3#"){
        digitalWrite(4,HIGH);}
    if(a =="*stop#"){
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);}
    if(a =="*lights on#"){
        digitalWrite(2,HIGH);
        digitalWrite(3,HIGH);
        digitalWrite(4,HIGH);}
    if(a =="*blink#"){
       while(a !="*stop#"){
          while(Serial2.available()) {
        
        a= Serial2.readString();// read the incoming data as string
        
        Serial.println(a);
        
        }
        if(a =="*stop#"){
          break;}
              digitalWrite(2,HIGH);
              delay(200);
              digitalWrite(3,HIGH);
              delay(200);
              digitalWrite(4,HIGH);
              delay(200);
              digitalWrite(2,LOW);
              delay(200);
              digitalWrite(3,LOW);
              delay(200);
              digitalWrite(4,LOW);
              delay(200);
        }
        }
        if(a =="*next#"){
        while(a !="*stop#"){
          while(Serial2.available()) {
        
        a= Serial2.readString();// read the incoming data as string
        
        Serial.println(a);
        
        }
        if(a =="*stop#"){
          break;}
              int del = 70;
              digitalWrite(4,LOW);
              digitalWrite(2,HIGH);
              delay(del);
              digitalWrite(2,LOW);
              digitalWrite(3,HIGH);
              delay(del);
              digitalWrite(3,LOW);
              digitalWrite(4,HIGH);
              delay(del);
              digitalWrite(3,LOW);
              digitalWrite(4,HIGH);
              delay(del);
              digitalWrite(4,LOW);
              digitalWrite(3,HIGH);
              delay(del);
              digitalWrite(3,LOW);
              digitalWrite(2,HIGH);
              delay(del);

        }
        }

}
