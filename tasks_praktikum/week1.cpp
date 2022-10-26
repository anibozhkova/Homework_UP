// 1_lektsiya.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //task 0
    //cout << "Hello C++" << endl;

    //task 1
    /*int a, b, c;
    cin >> a >> b >> c;
    int result = a + b + c;
    cout << result;*/

    //task 2
    /*int x1, x2, y1, y2;
    cout << "Point 1:"<<endl;
    cout << "x = ";
    cin >> x1;
    cout << "y = ";
    cin >> y1;
    cout << "Point 2:" << endl;
    cout << "x = ";
    cin >> x2;
    cout << "y = ";
    cin >> y2;
    double result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Result: " << result << endl;*/

    //task 3
    /*int firstNumber, secondNumber, temp;
    cout << "first number: ";
    cin >> firstNumber;
    cout << "second number: ";
    cin >> secondNumber;
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
    cout << "first number:" << firstNumber<<endl;
    cout << "second number: " << secondNumber<<endl;*/

    //task 4
    /*cout << "Input number" << endl;
    int number, sum = 0;
    cin >> number;
    sum = sum + (number % 10);
    number = number / 10;
    sum = sum + (number % 10);
    number = number / 10;
    sum = sum + (number % 10);
    number = number / 10;
    cout << "Sum = " << sum << endl;*/

    //Homework
    //task 1
    /*double n, m, a;
    cout << "Input size of a floor (width length): ";
    cin >> n >> m;
    cout << "Input size of a tile: ";
    cin >> a;
    cout << (int)ceil((n * m) / (a * a)) 
        << " tiles are needed to cover the floor." << endl;*/

    //task 2
    float temperature;
    char scale;
    cout << "Input temperature (°F) and the scale you would like to see (°C/K): ";
    cin >> temperature >> scale;
    double temperatureCelsius = ((temperature - 32) * 5) / 9.0;
    if (scale == 'C')
    {
        cout << round(temperatureCelsius) << "°C" << endl;
    }
    else if (scale == 'K')
    {
        cout << round(temperatureCelsius + 273.15) << "°C" << endl;
    }
    else
    {
        cout << "Wrong scale." << endl;
    }
}
