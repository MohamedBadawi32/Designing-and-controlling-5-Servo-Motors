#include <Servo.h>

Servo servo8, servo9, servo10, servo11, servo12; // create servo object to control a servo
int ap8 = A0, ap9 = A1, ap10 = A2, ap11 = A3, ap12 = A4;    // variables where the potentiometer is connected
int var8, var9, var10, var11, var12;                   // variables to store from the anolog potentiometer
    
void setup() {
  servo8.attach(8);    // attaches the first servo on pin 8 to the servo object
  servo9.attach(9);    // attaches the second servo on pin 9 to the servo object
  servo10.attach(10);  // attaches the third servo on pin 10 to the servo object
  servo11.attach(11);  // attaches the fourth servo on pin 11 to the servo object
  servo12.attach(12);  // attaches the fifth servo on pin 12 to the servo object
}

void loop() {
    var8 = analogRead(ap8);
    var8 = map(var8, 0, 1023, 0, 90);
    servo8.write(var8); 
    
    var9 = analogRead(ap9);
    var9 = map(var9, 0, 1023, 0, 90);
    servo9.write(var9);

    var10 = analogRead(ap10);
    var10 = map(var10, 0, 1023, 0, 90);
    servo10.write(var10);
    
    var11 = analogRead(ap11);
    var11 = map(var11, 0, 1023, 0, 90);
    servo11.write(var11);
    
    var12 = analogRead(ap12);
    var12 = map(var12, 0, 1023, 0, 90);
    servo12.write(var12);
    delay(15);             
                               

}
