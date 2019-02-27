#pragma once
//13.Write a program in C++ that takes a number as input and prints its multiplication table upto 10
#include<iostream>
using namespace std;
void tableCal()
{
	int num;

	cout << "Enter Number To Find Multiplication table "<<endl;
	cin >> num;

	for (int a = 1; a <= 10; a++)
	{
		cout << num << " X " << a << " = " << num * a << endl;
	}

}