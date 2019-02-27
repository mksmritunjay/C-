//9.Write a program in C++ that converts kilometers per hour to miles per hour
#pragma once
#include<iostream>
using namespace std;

void travel()
{
	double k, r;
	//multiply to 0.6214 
	cout << "To convert kmh to mph" << endl;
	cout << "Please enter the km=" << endl;

	cin >> k;
	r = k * 0.6214;
	cout << k << "km" << "to \t" << r << "mph" << endl;

}