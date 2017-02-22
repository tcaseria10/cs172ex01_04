#include <iostream>	
#include <cmath>
#include <ctime>
using namespace std;

// Tyler Caseria
// CS 172
// ex01_04
// 7 February 2017

void functionarray(int array2[], int size2) {
	int integer;
	cout << "Please input an integer between 1 and " << size2 << "." << endl;
	cin >> integer;
	int result;
	result = (array2[integer] * pow(integer, 2)) + (array2[1] * integer) + array2[0];
	cout << "The result of the calculation is: " << result << "." << endl;


}

void outputarray(int array[], int size) {
	cout << "These are the values in your array:" << endl;
	for (int counter = 0; counter <= size; counter++) {
		cout << array[counter] << endl;
	}
}

void ex04() {
	int integers[2];
	cout << "Enter three integers: " << endl;
	cin >> integers[0];
	cout << endl;
	cin >> integers[1];
	cout << endl;
	cin >> integers[2];
	cout << endl;
	int sum = 0, product = 1;
	for (int counter = 0; counter <= 2; counter++) {
		sum = sum + integers[counter];
		product = product * integers[counter];
	}
	cout << "The sum of your integers is " << sum << "." << endl;
	cout << "The product of your integers is " << product << "." << endl;
	outputarray(integers, 2);
	functionarray(integers, 2);
}

int main() {
	ex04();
	
	return 0;
}