// Exercise 1: Exploring Expressions

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	// Ask for and input age
	cout << "Enter your age: ";
	int age;
	cin >> age;

	// calculate age in 10 years
	int future_age = age + 10;

	// output message with age in 10 years
	cout << "Your age in ten years will be " << future_age << "! You're getting old!" << endl;

	// ask for and input fahrenheit
	cout << "Enter the current temperature in Fahrenheit: ";
	int f;
	cin >> f;

	// convert fahrenheit to celcius
	double c = ((f - 32.0) * (5.0 / 9.0));

	// output message with celcius
	cout << "It is " << c << " degrees Celcius." << endl;

	return 0;
}
