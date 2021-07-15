#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup() {

Serial.begin(9600);

pinMode(9, OUTPUT);
pinMode(10, INPUT);

servoLeft.attach(13);
servoRight.attach(12); 
halt();
delay(1000);

}

void loop() {

  tone(9,38000, 8);//IR pulse
  delay(1);
  byte ir_detect = digitalRead(10);
  delay(100);

  Serial.println(ir_detect);

  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  delay(1);

//Wait 1ms and let the capacitor discharge
  pinMode(2, INPUT);
  delay(1);

//Read pin 2

  byte sensor1 = digitalRead(2);

  if(sensor1 == 0)
  {
    veerLeft(5);  
  }
  else
  {
    veerRight(5);
  }

  if(!ir_detect)
  {
    servoLeft.writeMicroseconds(1400);
    servoRight.writeMicroseconds(1600);
    delay(500);

    halt();
    delay(500);
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
