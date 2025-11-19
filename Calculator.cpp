#include <iostream>
using namespace std;

float sum(float num1, float num2) {
	return num1 + num2;
}

float subtraction(float num1, float num2) {
	return num1 - num2;
}

float multiplication(float num1, float num2) {
	return num1 * num2;
}

float division(float num1, float num2) {
	if (num2 != 0) {
		return num1 / num2;
	} else {
		cout << "Error: Division by zero!" << endl;
		return 0; // or handle error as appropriate
	}
}

int get_user_input() {
	int input;
	cout << "Choose an operation:" << endl;
	cout << "1) Addition (+)" << endl;
	cout << "2) Subtraction (-)" << endl;
	cout << "3) Multiplication (*)" << endl;
	cout << "4) Division (/)" << endl;
	cout << "Enter the number of the operation (1-4): ";
	cin >> input;

	cout << "You have Choosed: " << input << endl;

	return 0;
}

int main() {

	get_user_input();

}