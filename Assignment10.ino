#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup()
{
  Serial.begin(9600);
  pinMode(5,INPUT);
  pinMode(7, INPUT);

  servoLeft.attach(13);
  servoRight.attach(12); 
  halt();
  delay(1000);
}

void loop()
{
  //Charge capacitor for 1ms
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  delay(1);

  //Wait 1ms and let the capacitor discharge
  pinMode(2, INPUT);
  delay(1);

  //Read pin 2

  byte sensor1 = digitalRead(2);

  Serial.println(sensor1);
  delay(50);

  if(sensor1 == 0)
  {
    veerLeft(5);  
  }
  else
  {
    veerRight(5);
  }

  byte wLeft = digitalRead(5);
  byte wRight = digitalRead(7);

  if( !wLeft || !wRight)
  {
    halt();
    tone(4, 450, 1000);
    delay(1000);
  }
}

void halt()
{  
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500); 
}

void veerLeft(int ms)
{
  servoLeft.writeMicroseconds(1500 + 25);
  servoRight.writeMicroseconds(1500 - 75);
  delay(ms);
}

void veerRight(int ms)
{
  servoLeft.writeMicroseconds(1500 + 75);
  servoRight.writeMicroseconds(1500 - 25);
  delay(ms);
}

