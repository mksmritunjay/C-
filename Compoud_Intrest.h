//15.Write a program in C++ to enter P, T, R and calculate Compound Interest.
#pragma once
#include<iostream>
#include<cmath>
using namespace std;
void intrest()
{
	double p=0, R, T,res;
	cout << "please enter few detail:" << endl;
	cout << "Principle" << endl;
	cin >> p;
	cout << "Time" << endl;
	cin >> T;
	cout << "Rate" << endl;
	cin >> R;
	res = p*(1 + pow((R / T),T));

	cout << "The C.I of \n" << res << endl;



}