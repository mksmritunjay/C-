#pragma once
//Write a program in C++ to find the sizeof fundamental data type
#include<iostream>
using namespace std;
void size()
{
	//b:
	int a = 0;
	cout << "Please enter the data type \n 1. for the int \n 2.for float \n 3.for double \n 4. for char \n 5. for the the long"<<endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "The size of the integer "<<sizeof(int);
			break;
	case 2:
		cout << "The size of the integer "<<sizeof(float);
		break;
	case 3:
		cout << "The size of the integer "<<sizeof(double);
		break;
	case 4:
			cout <<"The size of the integer "<< sizeof(char);
			break;
	case 5:
		cout << "The size of the integer "<<sizeof(long);
		break;
	default:
		cout << "you have enter a wrong choice";
	//	goto b;
		getchar();


	}
}