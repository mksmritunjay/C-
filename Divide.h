//10.Write a program in C++ to compute quotient and remainder
#pragma once
#include<iostream>
using namespace std;
void divide()
{
	int divisor, dividend, quotient, remainder;

	cout << "Enter dividend: ";
	cin >> dividend;

	cout << "Enter divisor: ";
	cin >> divisor;

	quotient = dividend / divisor;
	remainder = dividend % divisor;

	cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " << remainder;

}