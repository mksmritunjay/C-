#pragma once
//6.Write a program in C++ to calculate the volume of a sphere.
#include<iostream>
using namespace std;
void volume() 
{
	//V=4/3pie r3;
	double rad;
	cout << "To calculate the volume of the sphere" << endl;
	cout << "Please enter the radius : \t" << endl;
	cin >> rad;
	double v = (4 / 3)*(3.147)*(rad*rad*rad);
	cout << "The voulme = " << v << endl;


}

