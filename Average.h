//11.Write a program in C++ to compute the total and average of four numbers.
#pragma once
#include<iostream>
using namespace std;
void average()
{
	int n;
	
	cout << "How many number do you have for the average =";
	cin >> n;
	int avg = 0, j=0;
	cout << "Please enter the number " << endl;

	for (int i = 1; i <= n; i++)
	{
		cin >> j;
		avg += j;
	}
	cout << avg/n;





}