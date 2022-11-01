
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //task 1
    /*int month, year, daysCount;
    bool leapYear = false;
    cout << "Input month: ";
    cin >> month;
    cout << "Input year: ";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                leapYear == true;
            }
        }
        else
        {
            leapYear = true;
        }
    }
    if (year > 0)
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            daysCount = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysCount = 30;
            break;
        case 2:
            if (leapYear)
            {
                daysCount = 29;
            }
            else
            {
                daysCount = 28;
            }
            break;
        default:
            daysCount = 0;
            break;
        }
    }
    if (daysCount != 0)
    {
        cout << "This month has " << daysCount << " days" << endl;
    }
    else
    {
        cout << "There's no such month" << endl;
    }
    return 0;*/

    //task 2
    /*int number;
    cout << "Input number: ";
    cin >> number;
    if (number < 0 || number > 9)
    {
        cout << "Invalid number" << endl;
        return 0;
    }
    switch (number)
    {
    case 0:
    case 6:
    case 9:
        cout << "The count of circles is 1" << endl;
        break;
    case 8:
        cout << "The count of circles is 2" << endl;
        break;
    default:
        cout << "The count of circles is 0" << endl;
        break;
    }
    switch (number)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    case 4:
        cout << "Four" << endl;
        break;
    case 5:
        cout << "Five" << endl;
        break;
    case 6:
        cout << "Six" << endl;
        break;
    case 7:
        cout << "Seven" << endl;
        break;
    case 8:
        cout << "Eight" << endl;
        break;
    case 9:
        cout << "Nine" << endl;
        break;
    default:
        cout << "This is not a digit" << endl;
        break;
    }
    return 0;*/

    //task 3
    /*int year;
    cout << "Input year: ";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " is a leap year" << endl;
                return 0;
            }
            else
            {
                cout << year << " is  not a leap year" << endl;
                return 0;
            }
        }
        else
        {
            cout << year << " is a leap year" << endl;
            return 0;
        }
    }
    else
    {
        cout << year << " is not a leap year" << endl;
        return 0;
    }*/
    
    //task 4
    /*int num1, num2, num3;
    cout << "Input three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << (num1 + num2 > num3 ?
        num2 + num3 > num1 ?
        num1 + num3 > num2 ?
        "Triangle exists" : 
        "Triangle does not exist" : 
        "Triangle does not exist" : 
        "Triangle does not exist") << endl;
    return 0;*/

    //task 5
    bool isTrue = false;
    int p, a, b, c, d, f, x;
    //a
    cout << "Enter a number: ";
    cin >> p;
    p % 7 == 0 ? 
        p % 4 == 0 ? isTrue = true : isTrue = false : 
    isTrue = false;

    //b
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a != 0)
    {
        b * b - 4 * a * c < 0 ? isTrue = true : isTrue = false;
    }
    else
    {
        cout << "The first number has to be positive" << endl;
    }

    //v
    cout << "Enter point coordinates: ";
    cin >> a >> b;
    a >= -5 ? 
        a <= 5 ? 
            b <= 6 ? 
                b >= -6 ? isTrue = true : isTrue = false :
            isTrue = false : 
        isTrue = false :
    isTrue = false;

    //g
    cout << "Enter point coordinates: ";
    cin >> a >> b;
    cout << "Enter circle's centre coordinates: ";
    cin >> c >> d;
    cout << "Enter the radius of the circle: ";
    cin >> f;
    if (a < c - f || a > c + f)
    {
        isTrue = true;
    }
    else
    {
        isTrue = false;
    }
    if (b < d - f || b > d + f)
    {
        isTrue = true;
    }
    else
    {
        isTrue = false;
    }

    //d
    cout << "Enter point coordinates: ";
    cin >> a >> b;
    a >= -5 ? 
        a <= 0 ?
            b <= 0 ? 
                b >= -5 ? isTrue = true : isTrue = false :
            isTrue = false :
        isTrue = false :
    isTrue = false;

    //j
    cout << "Enter number: ";
    cin >> x;
    x >= 0 ?
        x <= 1 ? isTrue = true : isTrue = false :
    isTrue = false;

    //z
    cout << "Enter number: ";
    cin >> x;
    cout << "Enter three numbers to compare: ";
    cin >> a >> b >> c;
    x == max(a, b, c) ? isTrue = true : isTrue = false;

    //i
    cout << "Enter number: ";
    cin >> x;
    cout << "Enter three numbers to compare: ";
    cin >> a >> b >> c;
    x > max(a, b, c) ? isTrue = true :
        x < max(a, b, c) ? isTrue = true : isTrue = false;

    //k
    bool boolX, boolY;
    cout << "Enter two binary values: ";
    cin >> boolX >> boolY;
    if (boolX || boolY)
    {
        isTrue = true;
    }
    else
    {
        isTrue = false;
    }

    //l
    cout << "Enter two binary values: ";
    cin >> boolX >> boolY;
    if (boolX && boolY)
    {
        isTrue = true;
    }
    else
    {
        isTrue = false;
    }

    //m
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a < 0 && b < 0 && c < 0)
    {
        isTrue = true;
    }
    else
    {
        isTrue = false;
    }

    //n
    cout << "Enter a three-digit number: ";
    cin >> p;
    p % 10 == 7 ? isTrue = true :
        (p / 10) % 10 == 7 ? isTrue = true :
            (p / 100) % 10 == 7 ? isTrue = true : isTrue = false;

    //o
    int m;
    cout << "Enter a three-digit number: ";
    cin >> m;
    if (m % 10 != (m / 10) % 10 &&
        m % 10 != (m / 100) % 10 &&
        (m / 10) % 10 != (m / 100) % 10)
    {
        isTrue = true;
    }
    else
    {
        isTrue = false;
    }

    //p
    cout << "Enter a three-digit number: ";
    cin >> m;
    if (m % 10 != (m / 10) % 10 &&
        m % 10 != (m / 100) % 10 &&
        (m / 10) % 10 != (m / 100) % 10)
    {
        isTrue = false;
    }
    else
    {
        isTrue = true;
    }
}