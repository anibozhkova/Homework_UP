
#include <iostream>
using namespace std;

int main()
{
    //task 0
    int number, a, b, c;
    cout << "Enter a number: ";
    cin >> number;
    c = number % 10;
    number /= 10;
    b = number % 10;
    a = number / 10;
    cout<<"S = "<< 2 * (a * b + a * c + b * c) << endl;
    cout << "V = " << a * b * c << endl;

    //task 1
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Is devisible by 2: " 
        << (number % 2 == 0 ? "YES" : "NO") 
        << endl;

    //task 2
    char operation;
    double number1, number2;
    cout << "Operation: ";
    cin >> operation;
    cout << "First number: ";
    cin >> number1;
    cout << "Second number: ";
    cin >> number2;
    cout << number1 << " " << operation << " " << number2 << " = "
        << (operation == '+' ? number1 + number2 :
            operation == '-' ? number1 - number2 :
            operation == '*' ? number1 * number2 :
            operation == '/' ? number1 / number2 :
            0)
        << endl;

    //task 3
    int number, firstDigit, secondDigit, thirdDigit, fourthDigit;
    cout << "Enter a 4-digit number: ";
    cin >> number;
    fourthDigit = number % 10;
    thirdDigit = (number / 10) % 10;
    secondDigit = (number / 100) % 10;
    firstDigit = number / 1000;
    cout << "Are the digits unique: ";
    if (firstDigit != secondDigit && firstDigit != thirdDigit 
        && firstDigit != fourthDigit && secondDigit != thirdDigit
        && secondDigit != fourthDigit && thirdDigit != fourthDigit)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
