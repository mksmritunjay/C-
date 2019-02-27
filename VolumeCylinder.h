#pragma once
//7.Write a program in C++ to calculate the volume of a cylinder.
#include<iostream>
using namespace std;
void volumeOfCylinder()
{
	//V=πr2h
	double r, h,v;
	cout << "To know volume of the cyinder: \t" << endl;
	cout << "Please enter the radius and hight of the cylinder " << endl;
	cin >> r >> h;
	v = 3.147*r*r*h;
	cout << "The volume of the cylinder : \t" << v << endl;

}