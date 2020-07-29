
// Ex6.cpp 
// 7/20/2020	*Assignment Date*
// Nishant Balaji

#include <iostream>		// Any other libraries, too
#include <iomanip>
using namespace std;

// Global Variables

// Function Prototypes
void ProgramGreeting();		// All programs will have this method


int main() {
	system("clear");
	ProgramGreeting();		// Should go somewhere around here
	
	int monkey[3][7] = {};
	int average[7]  = {};


	for(int r = 0; r < 3; r ++){
		for(int c = 0; c < 7; c++){
			cout << "Enter food for monkey " << r+1 << ", for day " << c+1 << ": ";
			cin >> monkey[r][c];
		}
	}
	
	for(int i = 0; i < 7; i++){
		int sum = 0;

		for(int j = 0; j < 3; j++){
			sum += monkey[j][i];
		}
		average[i] = sum/3;
	}

	int max = monkey[0][0];
	int min = monkey[0][0];

	for(int x = 0; x < 3; x++){
		for(int y = 0; y < 7; y++){
			if(monkey[x][y] > max){
				max = monkey[x][y];
			}
			if(monkey[x][y] < min){
				min = monkey[x][y];
			}
		}
	}

	cout << "Monkey Business" << endl;
	cout << "===============\n" << endl;

	cout << setw(5) << left << "M" << setw(5) << "D1" << setw(5) << "D2" << setw(5) << "D3" << setw(5) << "D4" << setw(5) << "D5" << setw(5) << "D6" << setw(5) << "D7" << endl;

	for(int a = 0; a < 3; a++){
		cout << setw(5) << left << a+1; 
		for(int b = 0; b < 7; b++){
			cout << setw(5) << left << monkey[a][b];
		}
		cout << endl;
	}

	cout << setw(5) << left << "Avg"; 
	for(int n = 0; n < 7; n++){
		cout << setw(5) << left << average[n];
	}
	cout << endl;
	cout << "Least amount of food eaten: " << min << endl;
	cout << "Greatest amount of food eaten: " << max << endl;


}


void ProgramGreeting() {
// Code goes here
	cout << "This program will take in the food eaten per day per monkey and will output the average, greatest and least amount of food eaten.\n\n" << endl;
}
