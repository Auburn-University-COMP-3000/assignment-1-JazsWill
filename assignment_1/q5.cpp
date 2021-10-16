#include <iostream>
using namespace std; 

int main ()
{
// Assignment #1 - Problem 5
	cout << "NUMBER 5\n";

	int degreesFarenheit;
	int degreesCelsius;

	degreesCelsius = 100;

	do
	{
		degreesFarenheit = 32 + (9.0 / 5.0) * degreesCelsius;
		if (degreesCelsius == degreesFarenheit)
			cout << "The Celsius value " << degreesCelsius << " is the same temperature in Farenheit.\n";
		else
			degreesCelsius--;
	} while (degreesCelsius != degreesFarenheit);

	return 0;    
}
