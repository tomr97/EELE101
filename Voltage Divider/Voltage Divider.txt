#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main() 
{
	//Declares variables
	char Volt1[100];
	double V1;
	char Res1[100];
	double R1;
	char Res2[100];
	double R2;
	double I;
	double Vout;

	//Takes voltage from user, stores it and casts it as a double
	printf("Enter an input voltage: ");
	fgets(Volt1, sizeof(Volt1), stdin);
	V1 = atof(Volt1);
	//Prints out voltage
	printf("\nYou printed %f volts for V1", V1);
	//Gets resistances from user
	printf("\nEnter a resistance for R1: ");
	fgets(Res1, sizeof(Res1), stdin);
	R1 = atof(Res1);
	//Gets second resistance from user
	printf("\nEnter a resistance for R2: ");
	fgets(Res2, sizeof(Res2), stdin);
	R2 = atof(Res2);
	//Confirms resistances
	printf("The resistances you entered were R1= %f ohms and R2= %f ohms.", R1, R2);
	//Calculates current in circuit
	I = V1 / (R1 + R2);
	//Calculates output voltage
	Vout = V1 * (R2 / (R1 + R2));
	//Prints out the current and output voltage
	printf("\n\nThe total current in the circuit is I= %f amperes.", I);
	printf("\nThe output voltage is Vout = %f volts.", Vout);
	//Closes program when user is ready
	printf("\n\n(Press any key to exit and close the console window)\n");
    _getch();

    return 0;
}