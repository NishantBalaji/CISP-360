
// Ex4.cpp
// 7/5/2020
// Nishant Balaji

#include <iostream>		// Any other libraries, too
#include <iomanip>
using namespace std;

// Global Variables

// Function Prototypes
void ProgramGreeting();		// All programs will have this method
void Unittest();			// All P400 programs should have this, too
double circleArea(int);

int main() {
	ProgramGreeting();		// Should go somewhere around here
	cout << "Circle Areas\n" << "============\n\n" << endl;
	cout << setw(10) << left <<"Radius" << setw(6) << "PI" << endl;
	cout << setw(10) << left << "------" << setw(6) << "--" << endl;
	cout << setw(10) << left << "1" << setw(6) << circleArea(1) << endl;
	cout << setw(10) << left << "2" << setw(6) << circleArea(2) << endl;
	cout << setw(10) << left << "4" << setw(6) << circleArea(4) << endl;
	cout << setw(10) << left << "8" << setw(6) << circleArea(8) << endl;
}


void ProgramGreeting() {
// Code goes here
	cout << "This program will output the area of a circle given its radius.\n\n" << endl;
}

double circleArea(int radius){
	const double PI = 3.14;
	double area = PI * radius * radius;
	return area;
}