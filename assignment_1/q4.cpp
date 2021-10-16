#include <iostream>
using namespace std; 

int main ()
{
// Assignment #1 - Number 4
	cout << "NUMBER 4\n";

	int numberOfPounds;
	int radiusOfSphere;

	cout << "Input weight of the sphere in pounds:";
	cin >> numberOfPounds;

	cout << "Input the radius of the sphere in feet:";
	cin >> radiusOfSphere;

	double buoyantForce;
	double objectVolume;
	const double pi = 3.14;
	const double specificWeightWater = 62.4;      /* Units: lb/cubic foot */

	objectVolume = (4.0 / 3) * pi * (radiusOfSphere * radiusOfSphere * radiusOfSphere);
	buoyantForce = objectVolume * specificWeightWater;

	if (buoyantForce >= numberOfPounds)
		cout << "The sphere will float in water.\n\n";
	else
		cout << "The sphere will sink in water.\n\n";
	
    	return 0;
}
