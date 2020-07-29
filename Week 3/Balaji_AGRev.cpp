
// C++Tem.cpp -- Example C++ code template
// 1/1/2020	*Assignment Date*
// Nishant Balaji

#include <iostream>		// Any other libraries, too
using namespace std;

// Function Prototypes
void ProgramGreeting();		// All programs will have this method
double FtoC(double);
double mmtoinch(double);
double temperatureChange(double, int);


int main() {
	ProgramGreeting();		// Should go somewhere around here


	double SEARATE;
	const double TEMPRATE = 0.13333333333;
	string firstName, lastName;
	// Specification B5 - Constants
	const double mmtoinch = 0.03937;



	// Specification B4 - Client Name
	cout << "What is your first name? Please enter without any spaces.  "; 
	cin >> firstName;
	cout << "What is your last name? Please enter without any spaces.  ";
	cin >> lastName;

	// Specification A4 - Prompt for Sea Level Increase
	cout << "Please enter the sea level increase rate: ";
	cin >> SEARATE;

	// Specification A5 - Headings
	cout << "\n\nSEA LEVEL RISE OVER THE LAST 100 YEARS\n" << "======================================" << endl;
	// Specification C1 - Rising Seas
	cout << "The world's oceans rose 1.8 mm or " << 1.8 * mmtoinch << " in over the past 100 years. \n  \n" << endl;

	cout << "FUTURE SEA LEVEL RISE\n" << "=====================" << endl;
	

	// Specification C2 - 15 year rise
	cout << "The world's oceans will rise " << (SEARATE*15) << " mm or " << SEARATE*15* mmtoinch << " in over the next 15 years.\n" << endl;


	// Specification C3 - 30 year rise
	cout << "The world's oceans will rise " << (SEARATE*30) << " mm or " << SEARATE*30* mmtoinch << " in over the next 30 years.\n" << endl;

	// Specification A3 - 50 Year Sea level Rise
	cout << "The world's oceans will rise " << (SEARATE*50) << " mm or " << SEARATE*50* mmtoinch << " in over the next 50 years.\n" << endl;

	cout << "AIR TEMPERATURE CHANGES\n" << "=======================" << endl;


	cout << "Average July Temperatures, today" << endl;
	cout << "New York City:  85 ◦F or  " << FtoC(85) << " ◦C" << endl;
	cout << "Denver:         88 ◦F or  " << FtoC(88) << " ◦C" << endl;
	cout << "Phoenix:        106 ◦F or  " << FtoC(106) << " ◦C" << endl;
	cout << "Sacramento:     92 ◦F or  " << FtoC(92) << " ◦C" << endl;
	// Specification A1 – Another city
	cout << "San Francisco:  67  ◦F or  " << FtoC(67) << " ◦C\n" << endl;


	// Specification C4 - 15 year temp
	cout << "Average July Temperatures, 15 years from today" << endl;
	cout << "New York City:  " << 85 + (TEMPRATE * 15)  << " ◦F or " << FtoC(85 + (TEMPRATE*15)) << " ◦C" << endl;
	cout << "Denver:         " << 88 + (TEMPRATE * 15)  << " ◦F or " << FtoC(88 + (TEMPRATE*15)) << " ◦C" << endl;
	cout << "Phoenix:        " << 106 + (TEMPRATE * 15) << " ◦F or " << FtoC(106 + (TEMPRATE*15)) << " ◦C" << endl;
	cout << "Sacramento:     " << 92 + (TEMPRATE * 15)  << " ◦F or " << FtoC(92 + (TEMPRATE*15)) << " ◦C" << endl;
	cout << "San Francisco:  " << 67 + (TEMPRATE * 15)  << " ◦F or " << FtoC(67 + (TEMPRATE*15)) << " ◦C\n" << endl;
	

	// Specification C5 - 30 year temp
	cout << "Average July Temperatures, 30 years from today" << endl;
	cout << "New York City:  " << 85 + (TEMPRATE * 30)  << " ◦F or " << FtoC(85 + (TEMPRATE*30)) << " ◦C" << endl;
	cout << "Denver:         " << 88 + (TEMPRATE * 30)  << " ◦F or " << FtoC(88 + (TEMPRATE*30)) << " ◦C" << endl;
	cout << "Phoenix:        " << 106 + (TEMPRATE * 30) << " ◦F or " << FtoC(106 + (TEMPRATE*30)) << " ◦C" << endl;
	cout << "Sacramento:     " << 92 + (TEMPRATE * 30)  << " ◦F or " << FtoC(92 + (TEMPRATE*30)) << " ◦C" << endl;
	cout << "San Francisco:  " << 67 + (TEMPRATE * 30)  << " ◦F or " << FtoC(67 + (TEMPRATE*30)) << " ◦C\n" << endl;


	// Specification B3 - 50 Year Temp
	cout << "Average July Temperatures, 50 years from today" << endl;
	cout << "New York City:  " << 85 + (TEMPRATE * 50)  << " ◦F or " << FtoC(85 + (TEMPRATE*50)) << " ◦C" << endl;
	cout << "Denver:         " << 88 + (TEMPRATE * 50)  << " ◦F or " << FtoC(88 + (TEMPRATE*50)) << " ◦C" << endl;
	cout << "Phoenix:        " << 106 + (TEMPRATE * 50) << " ◦F or " << FtoC(106 + (TEMPRATE*50)) << " ◦C" << endl;
	cout << "Sacramento:     " << 92 + (TEMPRATE * 50)  << " ◦F or " << FtoC(92 + (TEMPRATE*50)) << " ◦C" << endl;
	cout << "San Francisco:  " << 67 + (TEMPRATE * 50)  << " ◦F or " << FtoC(67 + (TEMPRATE*50)) << " ◦C\n" << endl;

	// Specification A2 – Mean January Temps
	cout << "Average January Temperatures, today" << endl;
	cout << "New York City:  39 ◦F or " << FtoC(39) << " ◦C" << endl;
	cout << "Denver:         49 ◦F or " << FtoC(49) << " ◦C" << endl;
	cout << "Phoenix:        68 ◦F or " << FtoC(68) << " ◦C" << endl;
	cout << "Sacramento:     56 ◦F or " << FtoC(56) << " ◦C" << endl;
	cout << "San Francisco:  58 ◦F or " << FtoC(58) << " ◦C\n" << endl;


	cout << "Average January Temperatures, 15 years from today" << endl;
	cout << "New York City:  " << 39 + (TEMPRATE * 15) << " ◦F or " << FtoC(39 + (TEMPRATE*15)) << " ◦C" << endl;
	cout << "Denver:         " << 49 + (TEMPRATE * 15) << " ◦F or " << FtoC(49 + (TEMPRATE*15)) << " ◦C" << endl;
	cout << "Phoenix:        " << 68 + (TEMPRATE * 15) << " ◦F or " << FtoC(68 + (TEMPRATE*15)) << " ◦C" << endl;
	cout << "Sacramento:     " << 56 + (TEMPRATE * 15) << " ◦F or " << FtoC(56 + (TEMPRATE*15)) << " ◦C" << endl;
	cout << "San Francisco:  " << 58 + (TEMPRATE * 15) << " ◦F or " << FtoC(58 + (TEMPRATE*15)) << " ◦C\n" << endl;
	

	cout << "Average January Temperatures, 30 years from today" << endl;
	cout << "New York City:  " << 39 + (TEMPRATE * 30) << " ◦F or " << FtoC(39 + (TEMPRATE*30)) << " ◦C" << endl;
	cout << "Denver:         " << 49 + (TEMPRATE * 30) << " ◦F or " << FtoC(49 + (TEMPRATE*30)) << " ◦C" << endl;
	cout << "Phoenix:        " << 68 + (TEMPRATE * 30) << " ◦F or " << FtoC(68 + (TEMPRATE*30)) << " ◦C" << endl;
	cout << "Sacramento:     " << 56 + (TEMPRATE * 30) << " ◦F or " << FtoC(56 + (TEMPRATE*30)) << " ◦C" << endl;
	cout << "San Francisco:  " << 58 + (TEMPRATE * 30) << " ◦F or " << FtoC(58 + (TEMPRATE*30)) << " ◦C\n" << endl;


	cout << "Average January Temperatures, 50 years from today" << endl;
	cout << "New York City:  " << 39 + (TEMPRATE * 50) << " ◦F or " << FtoC(39 + (TEMPRATE*50)) << " ◦C" << endl;
	cout << "Denver:         " << 49 + (TEMPRATE * 50) << " ◦F or " << FtoC(49 + (TEMPRATE*50)) << " ◦C" << endl;
	cout << "Phoenix:        " << 68 + (TEMPRATE * 50) << " ◦F or " << FtoC(68 + (TEMPRATE*50)) << " ◦C" << endl;
	cout << "Sacramento:     " << 56 + (TEMPRATE * 50) << " ◦F or " << FtoC(56 + (TEMPRATE*50)) << " ◦C" << endl;
	cout << "San Francisco:  " << 58 + (TEMPRATE * 50) << " ◦F or " << FtoC(58 + (TEMPRATE*50)) << " ◦C\n" << endl;


	// Specification B2 - Advice
	cout << "Advice: To remedy this issue, use less energy and convert to much cleaner forms of energy,\n        such as wind or hydro power. Also, produce less waste.\n\n\n" <<endl;

	cout << "Client: " << firstName << " " << lastName << endl; 
}


void ProgramGreeting() {
// Code goes here
	cout << "This program explores how the Earth's climate has changed over the past century \n and what it may be like in the future. \n \n \n \n";
}

// Specification B1 - Mixed output
double FtoC(double faren){
	double centigrade = (faren-32)/1.8;
	return centigrade;
}

double mmtoinch(double mm){
	double in = mm /25.4;
	return in;
}