 #include "deneyap.h"
#include "ServoESP32.h"

#define servopin D9    
#define DET D0
int sayac;

Servo servo1;

void setup() {
  servo1.attach(servopin);
}

void loop() {
  int buttonState = digitalRead(DET);
  
  if(buttonState == 1){
       sayac++;
       servo1.write(145);
       
    }else if (buttonState == 0){
        servo1.write(0); 
      }

}
