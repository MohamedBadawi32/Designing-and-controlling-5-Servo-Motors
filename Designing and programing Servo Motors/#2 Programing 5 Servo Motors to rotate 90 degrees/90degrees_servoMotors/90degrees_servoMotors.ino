
#include <Servo.h>

Servo servo8, servo9, servo10, servo11, servo12; // create servo object to control a servo
int pos8 = 0, pos9 = 0, pos10 = 0, pos11 = 0, pos12 = 0;    // variables to store the servo position
   

void setup() {
  servo8.attach(8);    // attaches the first servo on pin 8 to the servo object
  servo9.attach(9);    // attaches the second servo on pin 9 to the servo object
  servo10.attach(10);  // attaches the third servo on pin 10 to the servo object
  servo11.attach(11);  // attaches the fourth servo on pin 11 to the servo object
  servo12.attach(12);  // attaches the fifth servo on pin 12 to the servo object
}

void loop() {
  for (pos8=0, pos9=0, pos10=0, pos11=0, pos12=0; 
       pos8<=90, pos9<=90, pos10<=90, pos11<=90, pos12<=90;
       pos8+=1, pos9+=1, pos10+=1, pos11+=1, pos12+=1) {    // rotate the servo from 0 to 90 degrees
                                                            // in steps of 1 degree
    servo8.write(pos8);  // implement the new position on the servo
    servo9.write(pos9);
    servo10.write(pos10);
    servo11.write(pos11);
    servo12.write(pos12);
    delay(15);            // wait 15ms before steping another degree    
  }

  
  for (pos8=90, pos9=90, pos10=90, pos11=90, pos12=90;
  pos8>=0, pos9>=0, pos10>=0, pos11>=0, pos12>=0;
  pos8-=1, pos9-=1, pos10-=1, pos11-=1, pos12-=1) {       // rotate the servo from 90 to 0 degrees
                                                          // in steps of 1 degree
    servo8.write(pos8);  // implement the new position on the servo
    servo9.write(pos9);
    servo10.write(pos10);
    servo11.write(pos11);
    servo12.write(pos12);
    delay(15);            // wait 15ms before steping another degree                        
  }
}
