#include <stdio.h>
#include <float.h>
#include <math.h> 
#include <conio.h>
//Sets number of points to 800
#define num_points 800
//Defines step size so that 100 points goes from 0.0000 to 10.0000
#define step_size 0.0125

int main()
{
	//Declares source voltage and source resistance
	char vSource[100];
	char rSource[100];
	double Vs;
	double Rs;
	//Declares the arrays
	double ca[num_points];
	double pa[num_points];
	//Declares variables to use in for loop
	int i;
	double val;
	//Declares max and load variables
	double c_max;
	double p_max;
	double r_load;

	//Assigns values for ca from 0 to 10, incrementing by step_size
	for(i=0, val = 0; i < num_points; i++)
	{
		ca[i] = val;
		val+=step_size;
	}
	//Gets and stores the values for source voltage and resistance
	printf("Enter a value for the source voltage: ");
	fgets(vSource, sizeof(vSource), stdin);
	printf("Enter a value for the source resistance: ");
	fgets(rSource, sizeof(rSource), stdin);
	//Casts source voltage and resistance as a double data type
	Vs = atof(vSource);
	Rs = atof(rSource);
	//Prints out the source voltage and resistance to the user
	printf("\nYou entered %f volts for Vs and %f ohms for Rs.\n", Vs, Rs);
	//Calculates the power transferred in the system at each different value 
	//	of a constant
	for(i=1; i<num_points; i++)
	{
		pa[i] = ( (pow(Vs,2) * ca[i] * Rs) / pow(Rs * ca[i] * Rs, 2));
	}
	//Sets the first value in the c array equal to the max c value and the first
	//	value in the power array equal to the max c value
	c_max = ca[0];
	p_max = pa[0];
	//Determines if the next value is greater. If so, that value becomes the greatest
	//	value. If not, the value remains untouched and the next number is tested.
	for(i=1; i<num_points; i++)
	{
		if( pa[i] > p_max )
		{
			p_max = pa[i];
			c_max = ca[i];
		}
	}
	//Finds the load resistance when the power output is the greatest
	r_load = c_max * Rs;
	//Prints out max power and load resistance
	printf("\nMax power is %f watts and Rload is %f ohms.", p_max, r_load);

	printf("\n\nHit any key to close the program: ");
	_getch();
}