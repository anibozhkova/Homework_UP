// week4_seminar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//task 1
    /*int number;
    cout << "Input number of a day: ";
    cin >> number;
	switch (number)
	{
	case 1: 
		cout << "Monday" << endl; 
		break;
	case 2: 
		cout << "Tuesday" << endl; 
		break;
	case 3: 
		cout << "Wednesday" << endl; 
		break;
	case 4: 
		cout << "Thursday" << endl; 
		break;
	case 5: 
		cout << "Friday" << endl;
			break;
	case 6: 
		cout << "Saturday" << endl; 
		break;
	case 7: 
		cout << "Sunday" << endl; 
		break;
	default: 
		cout << "Wrong input!" << endl; 
		break;
	}
	return 0;*/

	//task 2
	/*int year;
	cout << "Input year: ";
	cin >> year;
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				cout << "The year " << year << " is a leap year." << endl; return 0;
			}
			else
			{
				cout << "The year " << year << " is not a leap year." << endl; return 0;
			}
		}
		else
		{
			cout << "The year " << year << " is a leap year." << endl; return 0;
		}
	}
	else
	{
		cout << "The year " << year << " is not a leap year." << endl;
	}*/

	//Task 3
	/*double a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "x = " << -b / a << endl;*/

	//task 4
	/*float a, b, c;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	if (a == 0)
	{
		cout << "This is not quadratic equation" << endl;
	}
	else
	{
		float d = b * b - 4 * a * c;
		if (d < 0)
		{
			cout << "No solution" << endl;
		}
		else if (d == 0)
		{
			cout << "x: " << -b / (2 * a) << endl;
		}
		else
		{
			cout << "x1: " << (-b - sqrt(d)) / (2 * a) << endl;
			cout << "x2: " << (-b + sqrt(d)) / (2 * a) << endl;
		}
	}*/
	

	//task 5
	/*int x, y;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	if (x == 0 && y == 0)
	{
		cout << "The point (0,0) is the starting point." << endl;
	}
	else if (x == 0 && y != 0)
	{
		cout << "The point (" << x << "," << y << ") is on the y-axis." << endl;
	}
	else if (x != 0 && y == 0)
	{
		cout << "The point (" << x << "," << y << ") is on the x-axis." << endl;
	}
	else if (x > 0 && y > 0)
	{
		cout << "The point (" << x << "," << y << ") is in the first quadrant." << endl;
	}
	else if (x < 0 && y > 0)
	{
		cout << "The point (" << x << "," << y << ") is in the second quadrant." << endl;
	}
	else if (x < 0 && y < 0)
	{
		cout << "The point (" << x << "," << y << ") is in the third quadrant." << endl;
	}
	else
	{
		cout << "The point (" << x << "," << y << ") is in the fourth quadrant." << endl;
	}*/

	//task 6
	int number, day, month, year;
	cout << "Enter a number: ";
	cin >> number;
	year = number % 10000;
	number /= 10000;
	month = number % 100;
	day = number / 100;
	bool leapYear = false;
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				leapYear = true;
			}
		}
		else
		{
			leapYear = true;
		}
	}
	if (year > 0)
	{
		if (month > 0 && month < 13)
		{
			if (day >= 1)
			{
				if (month == 2)
				{
					if (leapYear && day <= 29)
					{
						cout << day << "/" << month << "/" << year << " is valid date." << endl;
					}
					else if (!leapYear && day <= 28)
					{
						cout << day << "/" << month << "/" << year << " is valid date." << endl;
					}
					else
					{
						cout << day << "/" << month << "/" << year << " is not a valid date." << endl;
					}
				}
				else if (month % 2 == 0 && month <= 7 && day <= 30)
				{
					cout << day << "/" << month << "/" << year << " is valid date." << endl;
				}
				else if (month % 2 == 0 && month > 7 && day <= 31)
				{
					cout << day << "/" << month << "/" << year << " is valid date." << endl;
				}
				else if (month % 2 == 1 && month <= 7 && day <= 31)
				{
					cout << day << "/" << month << "/" << year << " is valid date." << endl;
				}
				else if (month % 2 == 1 && month > 7 && day <= 31)
				{
					cout << day << "/" << month << "/" << year << " is valid date." << endl;
				}
			}
			else
			{
				cout << day << "/" << month << "/" << year << " is not a valid date." << endl;
			}
		}
		else
		{
			cout << day << "/" << month << "/" << year << " is not a valid date." << endl;

		}
		
	}
	else
	{
		cout << day << "/" << month << "/" << year << " is not a valid date." << endl;
	}
	
}