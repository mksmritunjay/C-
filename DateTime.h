//12.Write a C++ program to display the current date and time.
#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;
void time()
{
	SYSTEMTIME a;
	GetLocalTime(&a);
	cout << "Date =\t" << a.wDay << " dd " << a.wMonth << " mm " << a.wYear <<" yy "<<endl;

	cout << "Time =\t" << a.wHour << " hh " << a.wMinute << " mm " << a.wSecond << " ss " << a.wMilliseconds<<" ms "<< endl;

}