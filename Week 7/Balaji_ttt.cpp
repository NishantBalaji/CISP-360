
// ttt.cpp
// 7/26/2020	*Assignment Date*
// Nishant Balaji

#include <iostream>		// Any other libraries, too
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iomanip>

using namespace std;

// Global Variables

// Function Prototypes
void ProgramGreeting();		// All programs will have this method
void Menu();
void Display(char[]);
int CompAI(char[]);
int validInput(char[]);
bool checkEnd(char[]);
void checkWin(char[]);

int main() {
	system("clear");
	ProgramGreeting();		// Should go somewhere around here
	bool continueGame = true;
	// Specification A1 - Main Game Loop
	do{
		
		int choice = 0; 
		bool validChoice = false;

		Menu();
		
		//Specification B2 - Valid Menu Choices 
		while(!validChoice){
			cin >> choice;
			if(choice == 1){
				cout << "You will be the letter 'O' and the computer is the letter 'X'. Get any three boxes in a row with you letter to win." << endl;
				cout << "Press 1 to return to the menu" << endl;
					while(!validChoice){
						cin >> choice;
						if(choice == 1){
							system("clear");
							Menu();
							validChoice = true;
						}
						else{
							cout << "Invalid Input. Please press 1." << endl;
							
						}
					}
				validChoice = false;
				choice = 0;				
			}
			else if(choice == 2){
				validChoice = true;
			}
			else if(choice == 3){
				exit(EXIT_SUCCESS);
			}
			else{
				cout << "Invalid Input. Please select one of the above numbers." << endl;
				cin >> choice;
			}
		}

		
		

		// Specification A3 - Array Data Type
		char fill[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
		Display(fill);

		// Specification C1 - Random Start
		srand (time(NULL));
		int comnum = rand() % 2;
		
		if(comnum == 0) {
			cout << "The computer will start first." << endl;

		}
		else{
			cout << "The human will start first." << endl;
		}

		char temp;
		cout << "Press any letter to continue." << endl;
		cin >> temp;

		bool cont = true;


		if(comnum == 0){
			int comp = 0;
			bool end = false;
			int input = 0;
			while(cont){
				
				comp = CompAI(fill);
				fill[comp] = 'X';
				system("clear");
				Display(fill);
				end = checkEnd(fill);
				if(end){
					cont = false;
					break;
				}


				input = validInput(fill);
				fill[input] = 'O';
				system("clear");
				Display(fill);
				end = checkEnd(fill);
				if(end){
					cont = false;
					break;
				}
			}
		}

		else{
			int comp = 0;
			bool end = false;
			int input = 0;
			while(cont){

				input = validInput(fill);
				fill[input] = 'O';
				system("clear");
				Display(fill);
				end = checkEnd(fill);
				if(end){
					cont = false;
					break;
				}

				comp = CompAI(fill);
				fill[comp] = 'X';
				system("clear");
				Display(fill);
				end = checkEnd(fill);
				if(end){
					cont = false;
					break;
				}
			}
		}

		checkWin(fill);

		// Specification A2 - Simple Prompt
		cout << "Would you like to play again? Y/N?" << endl;
		cin >> temp;
		temp = toupper(temp);
		if(temp == 'Y'){
			system("clear");
		}
		else{
			continueGame = false;
			exit(EXIT_SUCCESS);
		}
	}while(continueGame);
}


void ProgramGreeting() {
// Code goes here
	cout << "In this program, the computer will play a game of tic-tac-toe with you, the human. \n\n" << endl;
}

// Specification B1 - Start Menu
void Menu(){
	cout << "1. Explain Game" << endl;
	cout << "2. Play" << endl;
	cout << "3. Quit" << endl;
}

// Specification C2 - Simple Display
void Display(char arr[]){
	cout << "GAME BOARD" << endl;
	cout << "==========" << endl;
	for(int i = 0; i < 9; i++){
		cout << setw(3) << arr[i];

		if((i+1)%3 == 0 && ((i+1)!=9)){
			cout << endl <<setw(3) << "___" << setw(1) << "|" << setw(3) << "___" << setw(1) << "|" << setw(3) << "___" << endl;
		}
		else if ((i+1) != 9){
			cout << setw(1) << "|";
		}
		else{
			cout << "\n\n" << endl;
		}
	}
}

// Specification C3 - AI
int CompAI(char arr[]){
	bool test = true;
	int choice = 0;
	while(test){
		choice = rand() % 9;
		if(!(arr[choice] == 'X' || arr[choice] == 'O')/*static_cast<char>(choice) == arr[choice]*/){
			test = false;
			break;
		}

	}
	return choice; 
}
// Specification B3 – Valid Move
int validInput(char arr[]){
	int input;
	cout << "Enter the number of your choice:";
	bool valid = true;
	while(valid){
	cin >> input;
		if(!(arr[input] == 'X' || arr[input] == 'O')/*static_cast<char>(input) == arr[input]*/){
			valid = false;
		}
		else{
			cout << "Invalid Input." << endl;
		}
	}
	return input;
}


bool checkEnd(char arr[]){
	if(    (arr[0] == arr[1] && arr[1] == arr[2])
		|| (arr[3] == arr[4] && arr[4] == arr[5])	
		|| (arr[6] == arr[7] && arr[7] == arr[8])
		
		|| (arr[0] == arr[3] && arr[3] == arr[6])
		|| (arr[1] == arr[4] && arr[4] == arr[7])
		|| (arr[2] == arr[5] && arr[5] == arr[9])

		|| (arr[0] == arr[4] && arr[4] == arr[8])
		|| (arr[2] == arr[4] && arr[4] == arr[6])){
		return true;
	}
	return false;
}

void checkWin(char arr[]){
	if(    ((arr[0] == arr[1] && arr[1] == arr[2]) && arr[0] == 'O')
		|| ((arr[3] == arr[4] && arr[4] == arr[5]) && arr[3] == 'O')	
		|| ((arr[6] == arr[7] && arr[7] == arr[8]) && arr[6] == 'O')
		
		|| ((arr[0] == arr[3] && arr[3] == arr[6]) && arr[0] == 'O')
		|| ((arr[1] == arr[4] && arr[4] == arr[7]) && arr[1] == 'O')
		|| ((arr[2] == arr[5] && arr[5] == arr[9]) && arr[2] == 'O')

		|| ((arr[0] == arr[4] && arr[4] == arr[8]) && arr[0] == 'O')
		|| ((arr[2] == arr[4] && arr[4] == arr[6]) && arr[0] == 'O')){
		cout << "You win!" << endl;
	}

	else if(    ((arr[0] == arr[1] && arr[1] == arr[2]) && arr[0] == 'X')
		|| ((arr[3] == arr[4] && arr[4] == arr[5]) && arr[3] == 'X')	
		|| ((arr[6] == arr[7] && arr[7] == arr[8]) && arr[6] == 'X')
		
		|| ((arr[0] == arr[3] && arr[3] == arr[6]) && arr[0] == 'X')
		|| ((arr[1] == arr[4] && arr[4] == arr[7]) && arr[1] == 'X')
		|| ((arr[2] == arr[5] && arr[5] == arr[9]) && arr[2] == 'X')

		|| ((arr[0] == arr[4] && arr[4] == arr[8]) && arr[0] == 'X')
		|| ((arr[2] == arr[4] && arr[4] == arr[6]) && arr[0] == 'X')){
		cout << "Computer wins. You Lost." << endl;
	}

	else{
		cout << "There was a tie!" << endl;
	}
}