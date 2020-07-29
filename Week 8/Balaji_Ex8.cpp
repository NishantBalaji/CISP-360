
// Ex8.cpp
// 7/31/2020
// Nishant Balaji

#include <iostream>		// Any other libraries, too
using namespace std;

class Car {
public:	
	int year;
	string make;
	int speed;

	Car(int getYear, string getMake){
		year = getYear;
		make = getMake;
		speed = 0;
	}

public: int getYear(){
	return year;
}

public: string getMake(){
	return make;
}

public: int getSpeed(){

	return speed;
}

public: void accelerate(){
	speed = speed + 5;
	cout << "Vroom" << endl;
}

public: void brake(){
	speed = speed - 5;
	cout << "Urrrr" << endl;
}
};

// Global Variables

// Function Prototypes
void ProgramGreeting();		// All programs will have this method


int main() {
	ProgramGreeting();		// Should go somewhere around here
	Car Ford(2020, "Ford");
	cout << "A " << Ford.getYear() << " " << Ford.getMake() << " traveling at " << Ford.getSpeed() << "mph created." << endl;
	Ford.accelerate();
	Ford.accelerate();
	Ford.accelerate();
	Ford.accelerate();
	Ford.accelerate();
	cout << "Now traveling at " << Ford.getSpeed() << endl;
	Ford.brake();
	Ford.brake();
	Ford.brake();
	Ford.brake();
	Ford.brake();
	cout << "Now traveling at " << Ford.getSpeed() << endl;
}


void ProgramGreeting() {
// Code goes here
	cout << "This program will create a car with a given year and make. An example has been made to run the program.\n\n" << endl;
}

