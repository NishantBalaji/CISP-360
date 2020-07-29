
// ACDT.cpp
// 7/5/2020
// Nishant Balaji

#include <iostream>		// Any other libraries, too
#include <string> 
#include <ctime>
using namespace std;

// Global Variables

// Function Prototypes
void ProgramGreeting();		// All programs will have this method
void programMenu(int, int, int);
void communicationsFail();
void engineFail();
void inFlightIcing();

int main() {
	ProgramGreeting();		// Should go somewhere around here
	char cont;
	int month, day, year;
	

	// Specification B3 - Date
	cout << "Please insert the month, in integer form: ";
	cin >> month;
	cout << "Please insert the day in integer form: ";
	cin >> day;
	cout << "please insert the year in integer form: ";
	cin >> year;

	programMenu(month,day,year);


	//Numerical Menu
	/*
	int num;
	cout << "\n\nPlease choose one of the above options by entering the corresponding number." << endl;
	cin >> num;
	
	while(num != 4){
		if(num == 1){
			communicationsFail();
			cout << "\n\nWould you like to return to the main menu? Y/N?" << endl;
			cin >> cont;
			cont = toupper(cont);
			if(cont == 'Y'){
				system("clear");
				programMenu(month,day,year);
				cout << "\n\nPlease choose one of the above options by entering the corresponding number." << endl;
				cin >> num;
			}
			else{
				exit(EXIT_SUCCESS);
			}
		}
		if(num == 2){
			engineFail();
			cout << "\n\nWould you like to return to the main menu? Y/N?" << endl;
			cin >> cont;
			cont = toupper(cont);
			if(cont == 'Y'){
				system("clear");
				programMenu(month,day,year);
				cout << "\n\nPlease choose one of the above options by entering the corresponding number." << endl;
				cin >> num;
			}
			else{
				exit(EXIT_SUCCESS);
			}
		}
		if(num == 3){
			inFlightIcing();
			cout << "\n\nWould you like to return to the main menu? Y/N?" << endl;
			cin >> cont;
			cont = toupper(cont);
			if(cont == 'Y'){
				system("clear");
				programMenu(month,day,year);
				cout << "\n\nPlease choose one of the above options by entering the corresponding number." << endl;
				cin >> num; 
			}
			else{
				exit(EXIT_SUCCESS);
			}
		}

		// Specification B1 - Menu Input Validation
		if(not(1 >= num && num<=4 )){
		cout << "\n\nInvalid Input." << endl;
		break;
		}
	}
	*/

	char input;
	cout << "\n\nPlease choose one of the above options by entering the corresponding letter." << endl;
	cin >> input;
	input = toupper(input);
		
	while(input != 'Q'){
		if(input == 'C'){
			communicationsFail();
			cout << "\n\nWould you like to return to the main menu? Y/N?" << endl;
			cin >> cont;
			cont = toupper(cont);
			if(cont == 'Y'){
				system("clear");
				programMenu(month,day,year);
				cout << "\n\nPlease choose one of the above options by entering the corresponding number." << endl;
				cin >> input;
				input = toupper(input);
			}
			else{
				exit(EXIT_SUCCESS);
			}
		}
		if(input == 'E'){
			engineFail();
			cout << "\n\nWould you like to return to the main menu? Y/N?" << endl;
			cin >> cont;
			cont = toupper(cont);
			if(cont == 'Y'){
				system("clear");
				programMenu(month,day,year);
				cout << "\n\nPlease choose one of the above options by entering the corresponding number." << endl;
				cin >> input;
				input = toupper(input);
			}
			else{
				exit(EXIT_SUCCESS);
			}
		}
		if(input == 'I'){
			inFlightIcing();
			cout << "\n\nWould you like to return to the main menu? Y/N?" << endl;
			cin >> cont;
			cont = toupper(cont);
			if(cont == 'Y'){
				system("clear");
				programMenu(month,day,year);
				cout << "\n\nPlease choose one of the above options by entering the corresponding number." << endl;
				cin >> input;
				input = toupper(input); 
			}
			else{
				exit(EXIT_SUCCESS);
			}
		}
		// Specification A2 - Menu Input Validation
		if(input != 'C' && input != 'E' && input != 'I' && input!= 'Q'){
		cout << "\n\nInvalid Input." << endl;
		break;
		}
	}
	
}


void ProgramGreeting() {
cout << "This program will display a troubleshooting tree for different emergency situations in a light aircraft.\n" << endl;
}

void programMenu(int month, int day, int year){
	system("clear");
	cout << month << "/" << day << "/" << year << "\n\n" << endl;
	cout << "Menu Options:" << endl << "____________" << endl;
	
	//Numerical Menu
	/*
	cout << "1. Communications Failure" << endl;
	cout << "2. Engine Failure" << endl;
	cout << "3. In-Flight Icing" << endl;
	cout << "4. Quit" << endl;
	*/

	// Specification A1 - Alpha Menu
	cout << "<C>ommunications Failure" << endl;
	cout << "<E>ngine Failure" << endl;
	cout << "<I>n-Flight Icing" << endl;
	cout << "<Q>uit" << endl;
}

// Specification C1 - Communications Option
// Specification A3 - One Function
void communicationsFail(){
	cout << "Switch to Alternate Radio\n\n" << endl;
}

// Specification C2 - Engine Failure Option
void engineFail(){
	char choice;
	cout << "Are you airbone? Y/N?" << endl;
	cin >> choice;
	choice = toupper(choice);
		if(choice == 'Y'){
			cout << "Is the electrical system working? Y/N?" << endl;
			cin >> choice;
			choice = toupper(choice);
			if(choice == 'Y'){
				cout << "Has the engine stopped running? Y/N?" << endl;
				cin >> choice;
				choice = toupper(choice);
				if(choice == 'Y'){
					cout << "Are you over the Mountains? Y/N?" << endl;
					cin >> choice;
					choice = toupper(choice);
					if(choice == 'Y'){
						cout << "Are you flying at Night? Y/N?" << endl;
						cin >> choice;
						choice = toupper(choice);
						if(choice == 'Y'){
							cout << "Turn on the landing light and look out the window. Do you like what you see? Y/N?" << endl;
							cin >> choice;
							choice = toupper(choice);
							if(choice == 'Y'){
								cout << "Make emergency landing.\n\n" << endl;
							}
							else{
								cout << "Turn off the landing light.\n\n" << endl;
							}
						}
						else{
							cout << "Make emergency landing.\n\n" << endl;
						}
					}
					else{
						cout << "Are you over water? Y/N?" << endl;
						cin >> choice;
						choice = toupper(choice);
						if(choice == 'Y'){
							cout << "Infate your life vest, make emergency landing.\n\n" << endl;
						}
						else{
							cout << "Make emergency landing on a road.\n\n" << endl;
						}
					}
				}
				else{
					cout << "Is the outside air temperature < 12 degrees? Y/N?" << endl;
					cin >> choice;
					choice = toupper(choice);
					if(choice == 'Y'){
						cout << "Turn on Carburator Heat.\n\n" << endl;
					}
					else{
						cout << "Switch to other fuel tank.\n\n" << endl;
					}
				}
			}
			else{
				cout << "Turn on the Master Switch.\n\n" << endl;
			}
		}
		else{
			cout << "Have a drink and call a mechanic.\n\n" << endl;
	}
}

// Specification C3 - In-Flight Icing Option
void inFlightIcing(){
	double ice;
	cout << "\n\nPlease input the estimated amount of ice on the wings, in the format '0.0'." << endl;
	cin >> ice;
	// Specification B2 - Icing Input Validation
	if(!(0.0 <= ice && ice <= 10.0)){
		cout << "\n\nThe value must be larger than 1mm and less than 10mm\n\n" << endl;
		exit(EXIT_SUCCESS);
	}
	else if(ice < 1){
		cout << "Use 5\% power to energize the deicing boots on the wings.\n\n" << endl;
	}
	else if(1 <= ice && ice <= 5){
		cout << "Use 20\% power to energize the deicing boots on the wings.\n\n" << endl;
	}
	else if(5 < ice && ice <= 9){
		cout << "Use 65\% power to energize the deicing boots on the wings.\n\n" << endl;
	}
	else if(9 < ice && ice <= 10){
		cout << "Use 100\% power to energize the deicing boots on the wings.\n\n" << endl;
	}
}