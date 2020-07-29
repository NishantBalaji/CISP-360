
// Specification C2 – Program Header
// dry.cpp
// 6/14/2020
// Nishant Balaji

#include <iostream>	
#include <string>
// Any other libraties, too
using namespace std;

void ProgramGreeting();

int main() {
	ProgramGreeting();
	cout << "Hello World, my name is Nishant" << endl; 
	// Specification B1 – Variables
	int num = 5; 
	float fl = 126.2;
	double db = 14.3;
	int number = 7;
	bool var = true;
	char a = 'g';
	string str = "test";
	// Specification A1 – Output Variables
	cout << "Integer num has the value of \'" << num << "\'." << endl;
	cout << "Float fl has the value of \'" << fl << "\'." << endl;
	cout << "Double db has the value of \'" << db << "\'." << endl;
	cout << "Integer number has the value of \'" << number << "\'." << endl;
	//separate outputs depending on status of boolean variable
	if(var){
		cout << "Boolean var has the value of true." << endl;
	}
	else{
		cout << "Boolean var has the value of false." << endl;
	}
	
	cout << "Char a has the value of \'" << a << "\'." << endl;
	cout << "String str has the value of \"" << str << "\"." << endl;
	return 0;
}
// Specification C1 – Program Greeting
void ProgramGreeting() {
	cout << "This is an introductory program." << endl;
}