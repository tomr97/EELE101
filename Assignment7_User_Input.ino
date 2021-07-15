int A, B, C;

void setup()
{
  // Initializes the baud rate and prints the first statement
  Serial.begin(9600);
  Serial.print("---Assignment 7 - User Input---\n\n");
}

void loop()
{
  // Asks for user input
  Serial.print("Enter the first integer between 0-9: ");
  // Waits for user input, and does nothing while waiting
  while(Serial.available() == 0){}
  // Converts user input from ASCII to decimal, and store into A
  A = Serial.read() - 48;  
  Serial.print("You entered: ");
  Serial.println(A);

  // Asks for user input
  Serial.print("Enter the second integer between 0-9: ");
  // Waits for user input, and does nothing while waiting
  while(Serial.available() == 0) {}
  // Converts user input from ASCII to decimal, and store into B
  B = Serial.read() - 48;  
  Serial.print("You entered: ");
  Serial.println(B);

  // Finds the sum of A and B
  C = A + B;

  Serial.print("\nThe sum is: ");
  Serial.print(C);
  Serial.print(". ");

  // Switch to see if C is a prime number
  switch(C)
  {
    case 0: Serial.print("The sum is NOT a prime number."); break;
    case 1: Serial.print("The sum is NOT a prime number."); break;
    case 2: Serial.print("The sum is a prime number."); break;
    case 3: Serial.print("The sum is a prime number."); break;
    case 4: Serial.print("The sum is NOT a prime number."); break;
    case 5: Serial.print("The sum is a prime number."); break;
    case 6: Serial.print("The sum is NOT a prime number."); break;
    case 7: Serial.print("The sum is a prime number."); break;
    case 8: Serial.print("The sum is NOT a prime number."); break;
    case 9: Serial.print("The sum is NOT a prime number."); break;
    case 10: Serial.print("The sum is NOT a prime number."); break;
    case 11: Serial.print("The sum is a prime number."); break;
    case 12: Serial.print("The sum is NOT a prime number."); break;
    case 13: Serial.print("The sum is a prime number."); break;
    case 14: Serial.print("The sum is NOT a prime number."); break;
    case 15: Serial.print("The sum is NOT a prime number."); break;
    case 16: Serial.print("The sum is NOT a prime number."); break;
    case 17: Serial.print("The sum is a prime number."); break;
    case 18: Serial.print("The sum is NOT a prime number."); break;
    
  }
  // Seperates first time through from the next time through
  Serial.println("\n----------------------------------------------------------------------------------------------------------");
}
