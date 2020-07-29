
// C++Tem.cpp -- Example C++ code template
// 1/1/2020	*Assignment Date*
// Nishant Balaji

#include <iostream>		// Any other libraries, too
using namespace std;

// Global Variables

// Function Prototypes
void ProgramGreeting();		// All programs will have this method
void Unittest();			// All P400 programs should have this, too
void getJudgeData(int &, int);
double calcScore(int arr[], int, int, int);
int findLowest(int arr[], int);
int findHighest(int arr[], int);



int main() {
	system("clear");
	
	ProgramGreeting();		// Should go somewhere around here
	
	int score1, score2, score3, score4, score5;
	int points[5] = {};
	
	getJudgeData(score1, 1);
	points[0] = score1;
	getJudgeData(score2, 2);
	points[1] = score2;
	getJudgeData(score3, 3);
	points[2] = score3;
	getJudgeData(score4, 4);
	points[3] = score4;
	getJudgeData(score5, 5);
	points[4] = score5;
	
	cout << "\n" << endl;
	int len = sizeof(points)/sizeof(points[0]);
	for(int i = 0; i < len; i++){
		cout << points[i] << endl;
	}


	int low = findLowest(points, 5);
	int high = findHighest(points, 5);
	
	cout << "Average Score is " << calcScore(points, 5, low, high) << endl;

	for(int j = 0; j < len; j++){
		if(points[j] == low){
			points[j] = 0;
			break;
		}
	}

	for(int l = 0; l < len; l++){
		if(points[l] == high){
			points[l] = 0;
			break;
		}
	}

	

	for(int k = 0; k < len; k++){
		cout << points[k] << endl;
	}
	
}


void ProgramGreeting() {
// Code goes here
	cout << "This program will calculate and display a contestant's final score, given the scores of 5 judges." << endl;
}

void getJudgeData(int &point, int num){
	float score;
	auto temp = 0;
	cout << "Enter Judge " << num << " score: ";
	bool invalid = true;
	while(invalid){
		cin >> score;
		if(score > 10 || score < 1){
			cout << "\nEnter a number between 1 and 10." << endl;
		}
		else{
			temp = score;
			temp = static_cast<int>(temp);	
			invalid = false;
		}
	}
	point = temp;
}

double calcScore(int arr[], int len, int min, int max){
	int sum = 0;
	double avg = 0;
	for(int i = 0; i < len; i++){
		sum += arr[i];
	}
	sum = sum - min;
	sum = sum - max;
	avg = sum / 3.0;
	return avg;
}


int findLowest(int arr[], int len){
	int min = arr[0];
	for(int i = 0; i < len; i++){
		if(arr[i] < min){
			min = arr[i]; 
		}
	}
	return min;
}

int findHighest(int arr[], int len){
	int max = 0;
	for(int i = 0; i < len; i++){
		if(arr[i] > max){
			max = arr[i]; 
		}
	}
	return max;
}