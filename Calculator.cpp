#include <iostream>
using namespace std;

float sum(float num1, float num2) {

	float sum;
	sum = num1 + num2;

	return sum;
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
	cout << "5) Exit" << endl;
	cout << "Enter the number of the operation (1-4): ";
	cin >> input;
	return input;
}

void get_numbers_input(float& input1, float& input2) {
	cout << "Enter two numbers separated by space: ";
	cin >> input1 >> input2;
}


int select_operation(int choice) {

	float result{};

	float num1{}, num2;
	get_numbers_input(num1, num2);

	if (choice == 1) result = sum(num1, num2);
	else if (choice == 2) result = subtraction(num1, num2);
	else if (choice == 3) result = multiplication(num1, num2);
	else if (choice == 4) result = division(num1, num2);

	return result;
}

int main() {

	while (true) {
		int choice = get_user_input();
		if (choice == 5) break;

		float calculated_num = select_operation(choice);
		cout << "Result: " << calculated_num << endl;

	};
	return 0;
}