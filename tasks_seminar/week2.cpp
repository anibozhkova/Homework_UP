// seminar_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //task 0
    //std::cout << "Ani Ivanova Bozhkova, 8MI0700126, 4" << std::endl;

    ////task 1
    //int a, b, c;
    //std::cout << "Input a: ";
    //std::cin >> a;
    //std::cout << "Input b: ";
    //std::cin >> b;
    //std::cout << "Input c: ";
    //std::cin >> c;

    //int v = a * b * c;
    //int s = 2 * (a * b + a * c + b * c);
    //std::cout << "V: " << v << "\nS: " << s << std::endl;

    //task 2
    /*int threeDigitNumber, firstDigit, secondDigit, thirdDigit;
    std::cout << "Enter three digit number: ";
    std::cin >> threeDigitNumber;
    thirdDigit = threeDigitNumber % 10;
    threeDigitNumber /= 10;
    secondDigit = threeDigitNumber % 10;
    firstDigit = threeDigitNumber / 10;
    std::cout << "First digit = " << firstDigit << std::endl;
    std::cout << "Second digit = " << secondDigit << std::endl;
    std::cout << "Third digit = " << thirdDigit << std::endl;
    std::cout << "Sum of the digits = " << firstDigit + secondDigit + thirdDigit << std::endl;*/

    //task 3
    /*std::cout << "Enter value in km/h: ";
    double distance;
    std::cin >> distance;
    std::cout << "The value in mph: " << distance * 0.6213711 << std::endl;*/

    //task 4
    std::cout << "Enter value in mph: ";
    double distance;
    std::cin >> distance;
    std::cout << "The value in km/h: " << distance * 1.609344 << std::endl;

}