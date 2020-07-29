
// C++Tem.cpp -- Example C++ code template
// 1/1/2020	*Assignment Date*
// Nishant Balaji

#include <iostream>		// Any other libraries, too
using namespace std;

// Global Variables

// Function Prototypes
void ProgramGreeting();		// All programs will have this method

int main() {
	ProgramGreeting();		// Should go somewhere around here


	int month, day, year;

	cout << "Magic Dates\n" << "============" << endl;
	cout << "Enter the month: ";
	cin >> month;
	cout << "Enter the day: ";
	cin >> day;
	cout << "Enter the year: ";
	cin >> year;
	cout << "Candidate date: " << month << "/" << day << "/" << year << endl;
	if(month*day == year){
		cout << "You have a magic date!\n" << endl;
	}
	else{
		cout << "Not a magic date.\n" << endl;
	}
}


void ProgramGreeting() {
// Code goes here
	cout << "This program will test if a given date is a 'magic' date, where the month times the year equals the year.\n" << endl;
}