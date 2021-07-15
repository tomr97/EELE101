#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  //Attaches servo motors to corresponding I/O pins
  servoLeft.attach(13);
  servoRight.attach(12);
}


void loop()
{
//Tells the left servo to move in a clockwise rotation
  
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1500);
  Serial.println("Turn left servo clockwise for 1 second.");

  delay(1000);
  
  //Tells the servos to stop
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500); 
  Serial.println("Stop for 1 second.");

  delay(1000);
  //Tells left servo to turn counterclockwise
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1500); 
  Serial.println("Turn left servo counterclockwise for 1 second.");

  delay(1000);
  //Tells the servos to stop
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500); 
  Serial.println("Stop for 1 second.");

  delay(1000);
  //turn right servo cw
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1300); 
  Serial.println("Turn right servo clockwise for 1 second.");

  delay(1000);
  //Tells the servos to stop
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500); 
  Serial.println("Stop for 1 second.");

  delay(1000);
  //Turns right servo ccw
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1700); 
  Serial.println("Turn right servo counterclockwise for 1 second.");

  delay(1000);
  //Tells the servos to stop
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500); 
  Serial.println("Stop for 1 second.");

  delay(1000);
  //Turns both servos cw
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300); 
  Serial.println("Turn both servos clockwise for 1 second.");

  delay(1000);
  //Tells the servos to stop
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500); 
  Serial.println("Stop for 1 second.");

  delay(1000);
  //turns both servos ccw  
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700); 
  Serial.println("Turn both servos counterclockwise for 1 second.");

  delay(1000);
  //Tells the servos to stop
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500); 
  Serial.println("Stop for 1 second.\n");

  delay(1000);
}
