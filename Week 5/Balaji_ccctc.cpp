
// ccctp.cpp
// 7/12/20
// Nishant Balaji

#include <iostream>		// Any other libraries, too
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;


// Global Variables

// Function Prototypes
void ProgramGreeting();		// All programs will have this method
void ProgramMenu();
double toCelsius(double);
double toKelvin(double);
double toRankine(double);
double toNewton(double);


int main() {
	system("clear");
	ProgramGreeting();		// Should go somewhere around here
	string x;
	// Specification B1– Floats for Temps
	double temp;
		
	// Specification B3- Auto Variable Type
	auto name = true;
	while(name){
		cout << "Enter one of the following item names to calculate the temperature on: cat, cot, cap or dog." << endl;
		cin >> x;
		transform(x.begin(), x.end(), x.begin(), ::tolower);
		// Specification A1– Sophisticated Word Check
		if(x.compare("cat") == 0){
			cout << "\n\nEnter the object's temperature, in Farenheit, as a double." << endl;
			cout << "The temperature range for cat is 86.0-102.0 degrees Farenheit." << endl;
			name = false;
			break;
		}
		
		else if(x.compare("cot") == 0){
			cout << "\n\nEnter the object's temperature, in Farenheit, as a double." << endl;
			cout << "The temperature range for cot is 54.0-80.0 degrees Farenheit." << endl;
			name = false;
			break;
		}

		else if(x.compare("cap") == 0){
			cout << "\n\nEnter the object's temperature, in Farenheit, as a double." << endl;
			cout << "The temperature range for cap is 72.0-88.0 degrees Farenheit." << endl;
			name = false;
			break;
		}

		// Specification A2– Another Thing
		else if(x.compare("dog") == 0){
			cout << "\n\nEnter the object's temperature, in Farenheit, as a double." << endl;
			cout << "The temperature range for dog is 69.0-76.0 degrees Farenheit." << endl;
			name = false;
			break;
		}

		// Specification C1– Only Valid Words
		else{
			cout << "This is an invalid input, please only choose one of the presented names.\n" << endl;
		}
	}

	bool valid = false;
	while(!valid){
		cin >> temp;
		// Specification C3– Valid Scale Menu Check
		if(x.compare("cat") == 0 && (temp <= 85.8 || temp >= 102.2)){
			// Specification B2– Valid Temps Only
			if(temp >= 102.2){
				cout << "The inputted value is too high. Please enter a value within the specified range." << endl;
			}
			if(temp <= 85.8){
				cout << "The inputted value is too low. Please enter a value within the specified range." << endl;
			}
		}

		else if(x.compare("cot") == 0 && temp <= 53.8 && temp >= 80.2){
			if(temp >= 80.2){
				cout << "The inputted value is too high. Please enter a value within the specified range." << endl;
			}
			if(temp <= 53.8){
				cout << "The inputted value is too low. Please enter a value within the specified range." << endl;
			}
		}

		else if(x.compare("cap") == 0 && temp <= 71.8 && temp >= 88.2){
			if(temp >= 88.2){
				cout << "The inputted value is too high. Please enter a value within the specified range." << endl;
			}
			if(temp <= 71.8){
				cout << "The inputted value is too low. Please enter a value within the specified range." << endl;
			}
		}

		else if(x.compare("dog") == 0 && temp <= 68.8 && temp >= 76.2){
			if(temp >= 76.2){
				cout << "The inputted value is too high. Please enter a value within the specified range." << endl;
			}
			if(temp <= 68.8){
				cout << "The inputted value is too low. Please enter a value within the specified range." << endl;
			}
		}

		else{
			valid = true;
		}
	}


	int menu;

	ProgramMenu();
	auto test = true;
	while(test){
		cin >> menu;
		cout << "\n\n";
		if(menu == 1){
			cout << setw(10) << left << "Scale" << setw(10) << left << "Temperature" << endl;
			cout << setw(10) << left << "Celsius" << setw(10) << left << toCelsius(temp) << endl;
			test = false;
		}

		else if(menu == 2){
			cout << setw(10) << left << "Scale" << setw(10) << left << "Temperature" << endl;
			cout << setw(10) << left << "Kelvin" << setw(10) << left << toKelvin(temp) << endl;
			test = false;
		}

		else if(menu == 3){
			cout << setw(10) << left << "Scale" << setw(10) << left << "Temperature" << endl;
			cout << setw(10) << left << "Rankine" << setw(10) << left << toRankine(temp) << endl;
			test = false;
		}
		else if(menu == 4){
			cout << setw(10) << left << "Scale" << setw(10) << left << "Temperature" << endl;
			cout << setw(10) << left << "Newton" << setw(10) << left << toNewton(temp) << endl;
			test = false;
		}
		else if(menu == 5){
			cout << setw(10) << left << "Scale" << setw(10) << left << "Temperature" << endl;
			cout << setw(10) << left << "Celsius" << setw(10) << left << toCelsius(temp) << endl;
			cout << setw(10) << left << "Kelvin" << setw(10) << left << toKelvin(temp) << endl;
			cout << setw(10) << left << "Rankine" << setw(10) << left << toRankine(temp) << endl;
			cout << setw(10) << left << "Newton" << setw(10) << left << toNewton(temp) << endl;
			test = false;
		}
		else{
			cout << "Invalid input. Please choose a number from 1-5" << endl;
		}
	}
}

void ProgramGreeting() {
// Code goes here
	cout << "This program will convert an inputted Farenheit temperature into Celsius, Kelvin, Rankine, or Newton temperature scales.\n\n" << endl;
}
void ProgramMenu(){
	// Specification C2– Temp Scale Menu
	cout << "\n\nSelect the corresponding number to select the value to convert the input to." << endl;
	cout << "1. Celsius" << endl;
	cout << "2. Kelvin" << endl;
	cout << "3. Rankine" << endl;
	cout << "4. Newton" << endl;
	cout << "5. All of the above" << endl;
	cout << "\n" << endl;
}

double toCelsius(double farenheit){
	double Celsius = ((farenheit-32) * 5) / 9;
	return Celsius;
}

double toKelvin(double farenheit){
	double kelvin = toCelsius(farenheit) +273.15;
	return kelvin;
}

double toRankine(double farenheit){
	double rankine = farenheit + 459.67;
	return rankine;
}

// Specification A3– Another Temperature Scale
double toNewton(double farenheit){
	double newton = (toCelsius(farenheit) * 33) / 100;
	return newton;
}