// if_switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //task 1
    /*cout << "Input 2 numbers: ";
    int num1, num2;
    cin >> num1 >> num2;
    cout << "The greater number is ";
    num1 > num2 ? cout << num1 : cout << num2;*/

    //task 2
    /*cout << "Input number: ";
    int number;
    cin >> number;
    if (number >= 1 && number <= 12)
    {
        cout << "Correct input!" << endl;
    }
    else
    {
        cout << "Incorrect input!" << endl;
    }*/

    //task 3
    /*int a, b, x;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input x: ";
    cin >> x;
    if (x > a && x < b)
    {
        cout << "x is in (a, b) interval" << endl;
    }
    else
    {
        cout << "x is not in (a, b) interval" << endl;
    }*/

    //task 4
    /*char symbol;
    cout << "Input symbol: ";
    cin >> symbol;
    if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'))
    {
        cout << "The symbol is a letter" << endl;
    }
    else
    {
        cout << "The symbol is not a letter" << endl;
    }*/

    //task 5
    /*double num1, num2;
    cout << "Input 2 numbers: ";
    cin >> num1 >> num2;
    if (num1 > 0 && num2 > 0)
    {
        cout << "Both numbers are positive" << endl;
    }
    else if (num1 > 0 || num2 > 0)
    {
        cout << "One number is positive" << endl;
    }
    else
    {
        cout << "Both numbers are negative" << endl;
    }*/

    //task 6
    /*int number;
    cout << "Input number: ";
    cin >> number;
    switch (number)
    {
    case 1: cout << "January" << endl; break;
    case 2: cout << "February" << endl; break;
    case 3: cout << "March" << endl; break;
    case 4: cout << "April" << endl; break;
    case 5: cout << "May" << endl; break;
    case 6: cout << "June" << endl; break;
    case 7: cout << "July" << endl; break;
    case 8: cout << "August" << endl; break;
    case 9: cout << "September" << endl; break;
    case 10: cout << "October" << endl; break;
    case 11: cout << "November" << endl; break;
    case 12: cout << "December" << endl; break;
    default: cout << "Incorrect input" << endl;
        break;
    }*/

    //task 7
    /*int n, m, k;
    cout << "Input n, m and k: ";
    cin >> n >> m >> k;
    if (k % n == 0 || k % m == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }*/

    //taks 8
    /*cout << "Input a, b and c: ";
    double a, b, c;
    cin >> a >> b >> c;
    double d = (b * b) - (4 * a * c);
    if (d < 0)
    {
        cout << "No answer" << endl;
    }
    else if(d == 0)
    {
        cout << (-b) / (2 * a) << endl;
    }
    else
    {
        cout << "x1: " << (-b + sqrt(d)) / (2 * a) << endl;
        cout << "x2: " << (-b - sqrt(d) ) / (2 * a) << endl;
    }*/

    //task 9
    /*cout << "Input sum of money: ";
    float sumOfMoney;
    char currencyFrom, currencyTo;
    cin >> sumOfMoney;
    cout << "Input current currency (e - EURO, b - BGN): ";
    cin >> currencyFrom;
    cout << "Input desired currency (e - EURO, b - BGN): ";
    cin >> currencyTo;
    cout << "Converted sum: ";
    if (currencyFrom == 'e' && currencyTo == 'b')
    {
        cout << sumOfMoney * 1.95 << endl;
    }
    else if (currencyFrom == 'b' && currencyTo == 'e')
    {
        cout << sumOfMoney / 1.95 << endl;
    }
    else if ((currencyFrom == 'e' && currencyTo == 'e') || (currencyFrom == 'b' && currencyTo == 'b'))
    {
        cout << sumOfMoney << endl;
    }
    else
    {
        cout << "Incorrect" << endl;
    }*/
    
    //task 10
    /*bool beerInTheFridge, rakiyaInTheFridge, iceInTheFreezer;
    cout << "Has Tishko put the beer in the fridge? (0 - no, 1 - yes)" << endl; 
    cin >> beerInTheFridge;
    cout << "Has Tishko put the rakiya in the fridge? (0 - no, 1 - yes)" << endl;
    cin >> rakiyaInTheFridge;
    cout << "Has Tishko put ice in the freezer? (0 - no, 1 - yes)" << endl;
    cin >> iceInTheFreezer;
    if (beerInTheFridge)
    {
        cout << "Tishko drinks beer :)))" << endl;
    }
    else if (rakiyaInTheFridge && iceInTheFreezer)
    {
        cout << "Tishko drinks rakiya :o" << endl;
    }
    else
    {
        cout << "Tishko has to go and buy beer :(" << endl;
    }*/

    //task 11
    int n, metersToWalk = 0;
    cout << "Input n:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        metersToWalk += 2 * i;
    }
    cout << "Tishko has to walk " << metersToWalk << " meters." << endl;
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
