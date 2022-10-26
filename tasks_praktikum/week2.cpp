// if.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //task 1
    /*int apples, pears, bananas;
    cout << "Input quantity of apples: ";
    cin >> apples;
    cout << "Input quantity of pears: ";
    cin >> pears;
    cout << "Input quantity of bananas: ";
    cin >> bananas;
    cout << "Taricho, don't forget to buy " << apples << " apples, "
        << pears << " pears and " << bananas << " bananas!";*/

    //task 2
    /*double num1, num2;
    cout << "Input numbers: " << endl;
    cin >> num1 >> num2;
    cout << "Sum: " << num1 + num2 <<
        "\nSubstraction: " << fabs(num1 - num2) <<
        "\nMultiplication: " << num1 * num2;*/

    //task 3
    /*int seconds, days, hours, minutes;
    cout << "Input seconds: ";
    cin >> seconds;
    days = seconds / 86400;
    seconds -= days * 86400;
    hours = seconds / 3600;
    seconds -= hours * 3600;
    minutes = seconds / 60;
    seconds -= minutes * 60;
    cout << days << " days, " << hours << " hours, "
        << minutes << " minutes, " << seconds << " seconds." << endl;*/

    //task 4
    /*int number, firstDigit, secondDigit, thirdDigit;
    cout << "Input number: ";
    cin >> number;
    firstDigit = number % 10;
    number /= 10;
    secondDigit = number % 10;
    thirdDigit = number / 10;
    cout << "Reversed: " << firstDigit << secondDigit << thirdDigit << endl;*/

    //task 5
    /*int a, side, h;
    cout << "Input side: ";
    cin >> side;
    cout << "Input apotema: ";
    cin >> a;
    cout << "Input height: ";
    cin >> h;
    int b = side * side;
    cout << "Volume: " << (1.0 / 3.0) * b * h << endl;
    cout << "S1: " << (4 * side) * a / 2 + b<<endl;*/

    //bonus task
    int x1, x2, y1, y2, r1, r2;
    cin >> x1 >>y1 >> x2 >> y2 >> r1 >> r2;
    int d1 = x2 - x1;
    int d2 = y2 - y1;
    double distance = sqrt(d1 * d1 + d2 * d2);
    cout << distance;
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
