void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("---Activity 2 - Hello World on the Arduino ---\n");
  Serial.println("Tom Rudolph");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello World");
  delay(500);
}
