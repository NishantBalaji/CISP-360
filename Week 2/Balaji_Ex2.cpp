
// Extra Credit Assignment 2
// 6/21/2020
// Nishant Balaji

#include <iostream>		// Any other libraries, too
using namespace std;

// Global Variables

// Function Prototypes
void ProgramGreeting();		// All programs will have this method


int main() {
	ProgramGreeting();		// Should go somewhere around here
	int rent, utilities, phone, cable;
	cout << "Enter the following expenses (without decimal points)";
	cout << "\nEnter monthly cost for rent: ";
	cin >> rent;
	cout << "\nEnter the monthly cost for utilities: ";
	cin >> utilities;
	cout << "\nEnter the monthly cost for phone: ";
	cin >> phone;
	cout << "\nEnter the monthly cost for cable: ";
	cin >> cable;

	int monthlyCost = rent + utilities + phone + cable;
	int annualCost = monthlyCost * 12;

	cout << endl << endl;
	cout << "Total Monthly Costs: " << monthlyCost << endl;
	cout << "Total Annual Cost: " << annualCost << endl;
}


void ProgramGreeting() {
// Code goes here
	cout << "This program will output the total monthly and annual costs for expenses when given the amounts spent" << endl << endl;
}