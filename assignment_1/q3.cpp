#include <iostream>
using namespace std; 

int main() {

// Assignment #1 - Problem 3
	cout << "NUMBER 3\n";

	int time;
	int freeFall;

	cout << "Enter a time in seconds:";
	cin >> time;

	freeFall = (32 * time) / 2 * (time * time);
	cout << "An object in freefall for " << time << " seconds will fall " << freeFall << " feet.\n\n"; 
	
	return 0;
}

