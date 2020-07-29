
// Extra Credit Assignment 1
// 6/15/2020
// Nishant Balaji

#include <iostream>		// Any other libraties, too
using namespace std;


// Global Variables

// Function Prototypes
void ProgramGreeting();		// All programs will have this method
void Unittest();			// All P400 programs should have this, too
double SalesPrediction(double var);


int main() {
	ProgramGreeting();		// Should go somewhere around here
	Unittest();				// Follows ProgrmGreeting
	return 0;
}


void ProgramGreeting() {
// Code goes here
	cout << "This program will output the percent of sales earned by the East Coast sales division of a company.\n \n \n" << endl;
}

void Unittest() {
// All test code here
	cout << "SalesPrediction \n";
	cout << "============= \n";
	cout << "Total Sales: 8.6mm \n";
	cout << "East Coast Div: " << SalesPrediction(8.6) << endl << endl;
	cout << "mm = millions \n";
}

double SalesPrediction(double var){
	return var * 0.58;
}