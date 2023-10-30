// C++ code
//
/*
  Sweep

  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

int pos = 0;
char opt=0;
Servo servo_9;

void setup()
{
  servo_9.attach(9); //params (pin,min,max)
  Serial.begin(9600);
}

void loop()
{
  servo_9.write(pos);
  // sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees
  if (Serial.available()> 0){
    opt=Serial.read();
    if(opt == '1'){
   for (pos = 0; pos <= 180; pos += 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(180);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
   }
    }else{
    if(opt == '2'){
     opt=Serial.read();
  for (pos = 0; pos >= 180; pos -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(0);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  }
  }
  }
}