//5.Write a program in C++ to swap two numbers.
#pragma once
#include<iostream>
using namespace std;
void swapNum()
{
	int a, b,y;
	cout << "Please enter the two number  a\t b\t" << endl;
	cin >> a>> b;
	y = a;
	a = b;
	b = y;
	cout <<"The swap number"<<endl<<"a="<< a<<endl<<"b=" << b<<endl;
}