void setup() {
  // put your setup code here, to run once:
  //Sets baud rate to 9600
  Serial.begin(9600);
  //Prints initial statements to monitor
  Serial.print("---Activity 2 - Hello World on the Arduino ---\n");
  Serial.println("Tom Rudolph");
}

void loop() {
  // put your main code here, to run repeatedly:
  //Prints statement
  Serial.println("Hello World");
  //Waits 500 ms
  delay(500);
  //Repeats
}
