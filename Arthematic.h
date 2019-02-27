//WAP to display various arthimetic operation using the different type of data type
#pragma once
#include<iostream>
using namespace std;
void mathematic()
{
	int cho;
	int a, b;
	double c, d;
	float e, f;
	cout << "Please the opertion which data type you want\n 1.int \n 2.float \n 3.double  " << endl;
	cin >> cho;

	switch (cho)
	{
		case 1:
			cout << "Please enter the a:" << endl;
			cin >> a;
			cout << "Please enter the b:" << endl;
			cin >> b;

			cout << "Addition :" << +a << "+" << +b << "=" << +(a + b) << endl;
			cout << "Subtraction :" << +a << "-" << +b << "=" << +(a - b) << endl;
			cout <<"Division :"<< +a << "/" << +b << "=" << +(a / b) << endl;
			cout <<"Multiply :"<< +a << "X" << +b << "=" << +(a * b) << endl;
			cout <<"Modulus  :"<< +a << "%" << +b << "=" << +(a % b) << endl;
			break;


		case 2:
			cout << "Please enter the a:" << endl;
			cin >> c;
			cout << "Please enter the b:" << endl;
			cin >> d;
			
			cout << "Addition :" << +c << "+" << +d << "=" << +(c+d) << endl;
			cout << "Subtraction :" << +c << "-" << +d << "=" << +(c - d) << endl;
			cout << "Division :" << +c << "/" << +d << "=" << +(c / d) << endl;
			cout << "Multiply :" << +c << "X" << +d << "=" << +(c * d) << endl;
			break;


		case 3:
			cout << "Please enter the a:" << endl;
			cin >> e;
			cout << "Please enter the b:" << endl;
			cin >> f;
			
			cout << "Addition :" << +e << "+" << +f << "=" << +(e + f) << endl;
			cout << "Addition :" << +e << "-" << +f << "=" << +(e - f) << endl;
			cout << "Division :" << +e << "/" << +f << "=" << +(e / f) << endl;
			cout << "Multiply :" << +e << "X" << +f << "=" << +(e * f) << endl;
			//cout << "Modulus  :" << +e << "%" << +f << "=" << +(e % f);
			break;

	}
}
