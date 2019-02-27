#pragma once


//WAP to check the limit of the interger of the max and min of the intege only


#include<iostream>
#include<climits>

void checkLimit()
{
	int a = 0;

	cout << "To know upper limit of the interger press\n  1.Upper: \n 2.Lower:" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "The upper limit of the interger = " << INT_MAX;
		break;
	case 2:
		cout << "The lower limit of the interger =" << INT_MIN;
		break;
	}

}