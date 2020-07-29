
// Ex7.cpp -- Example C++ code template
// 7/27/2020	*Assignment Date*
// Nishant Balaji

#include <iostream>		// Any other libraries, too
using namespace std;

// Global Variables

// Function Prototypes
void ProgramGreeting();		// All programs will have this methodoo


int main() {
	ProgramGreeting();		// Should go somewhere around here
	int size;
	bool invalid = true;
	
	cout << "Enter the number of scores to process: ";
	while(invalid){
		cin >> size; 
		if(size < 0){
			cout << "Number of scores must be positive. Try again." << endl;
		}
		else{
			invalid = false;
			break;
		}	
	}
	
	invalid = true;
	int arr[size] = {};
	int score = 0;

	for(int i = 0; i < size; i++){
		cout << "Score " << i+1 << ": ";
		while(invalid){
			cin >> score; 
			if(score < 0){
				cout << "Test scores must be positive. Try again." << endl;
			}
			
			else{
				invalid = false;
				break;
			}
		}
		arr[i] = score;
		invalid = true;
	}

	for(int i = 0; i < size; i++){
		cout << arr[i] << ",";
	}
	cout << endl;

	int temp[size] = {};
	int max;
	int num = 0;
	for(int i = 0; i < size; i++){
		max = arr[i];
		for(int j = 0; j < size; j++){
			if(arr[j] > max){
				max = arr[j];
				num = j;
			}
		}
		arr[num] = 0;
		temp[size-i-1] = max;
	}

	int sum = 0;
	for(int i = 0; i < size; i++){
		cout << temp[i] << ",";
		sum += temp[i];
	}
	cout << endl;

	int avg = sum/size;
	cout << "The average score is " << avg << endl;

	
}


void ProgramGreeting() {
// Code goes here
	cout << "This program will take in a specified number of test scores and sort them into a list and display their averages." << endl;
}

