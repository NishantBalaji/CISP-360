
// Specification C4 - Source File Header
// drake.cpp
// 6/21/2020
// Nishant Balaji

#include <iostream>		// Any other libraries, too
using namespace std;

//struc somestruct {

//};

//Class someclass {

//};

// Global Variables

// Function Prototypes
void ProgramGreeting();		// All programs will have this method

int main() {
	ProgramGreeting();		// Should go somewhere around here
	
	// Specification C2 - Variable Declaration
	// Specification C5 - Variable Initialization
	// Specification A1 – Constant Variables
	const int RATE = 7;
	const double PERCENTAGE_WITH_PLANETS = 0.4;
	double average = 0.9;
	const double PERCENTAGE_WITH_LIFE = 0.13;
	double percentageWithIntLife = 0.5;
	double percentageWithComm = 0.8;
	double lifetime = 10000;
	

	// Specification B1 - Calculation
	double drake = RATE * PERCENTAGE_WITH_PLANETS * average * PERCENTAGE_WITH_LIFE * percentageWithIntLife * percentageWithComm *lifetime;
	
	// Specification A5 - Drake Equation Heading
	cout << "\n" << "CHANCE OF INTELLIGENT LIFE \n" << "==========================\n";


	// Specification C1 – Program Output
	cout << "Drake equation output: " << drake << endl; 
	

	// Specification B2 - Double Output
	double drakeDouble = drake * 2;
	

	// Specification B3 - Double Output Headings
	cout << "\n" << "OUTPUT DOUBLED \n" << "==============\n";
	cout << drakeDouble << endl;
	

	// Specification B4 - Half Output Display
	double drakeHalf = drake / 2;
	

	// Specification B5 - Half Output Headings
	cout << "\n" << "OUTPUT HALVED \n" << "==============\n";
	cout << drakeHalf << endl;
	
	// Specification A3 - Variable Name Heading
	cout << "\n" << "VARIABLE NAMES AND VALUES \n" << "==========================\n";

	// Specification A2 – Display variables
	cout << "RATE: " << RATE << endl;
	cout << "PERCENTAGE_WITH_PLANETS: " << PERCENTAGE_WITH_PLANETS << endl;
	cout << "average: " << average << endl;
	cout << "PERCENTAGE_WITH_LIFE: " << PERCENTAGE_WITH_LIFE << endl;
	cout << "percentageWithIntLife: " << percentageWithIntLife << endl;
	cout << "percentageWithComm: " << percentageWithComm << endl;
	cout << "lifetime: " << lifetime << endl;
	
}

void ProgramGreeting() {
// Code goes here
	// Specification A4 - Program Greeting Heading
	cout << "\n" << "PROGRAM GREETING \n" << "================\n";
	// Specification C3 - Program Greeting
	cout << "This program will evaluate the Drake equation, used to calculate the number of potential alien civilizations in the universe. \n" << endl;
}