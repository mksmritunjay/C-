//8.Write a program in C++ to convert temperature in Celsius to Fahrenheit.
#pragma once
#include<iostream>
using namespace std;
void temp()
{
	double f, t;
	//T(°F) = T(°C) × 1.8 + 32
	cout << "To covert from °C to °F " << endl;
	cout << "Please enter the temp in celsius " << endl;
	cin >> t;
	f = (t*1.8) + 32;
	cout <<"Celsius=\t"<<t <<"\tto\t"<<"Fahrenheit\t"<<f<<endl;





}