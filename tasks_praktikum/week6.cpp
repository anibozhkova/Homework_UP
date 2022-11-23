#include <iostream>
using namespace std;

//task 1
double max(double number1, double number2)
{
    return number1 > number2 ? number1 : number2;
}

//task 2
bool isPrime(int number)
{
    if (number == 1)
    {
        return true;
    }
    int isPrime = true;
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
        }
    }
    return isPrime;
}

void PrintAllPrimeNumbers1To100()
{
    for (int i = 2; i <= 97; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

//task 3
int reverse(int number)
{
    int reversed = 0;
    while (number > 0)
    {
        (reversed *= 10) += number % 10;
        number /= 10;
    }
    return reversed;
}

void printPrimePalindroms(int number)
{
    int count = 0;
    for (int i = 2; count < number; i++)
    {
        if (isPrime(i) && i == reverse(i))
        {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;
}

//task 4
int pow(int number, int power)
{
    int poweredNumber = 1;
    for (int i = 0; i < power; i++)
    {
        poweredNumber *= number;
    }
    return poweredNumber;
}

bool isPowerOf2(int number)
{
    for (int i = 0; pow(2, i) <= number; i++)
    {
        if (number == pow(2, i))
        {
            return true;
        }
    }
    return false;
}

//task 5
int powerOfANumber(int number1, int number2)
{
    for (int i = 0; pow(number2, i) <= number1; i++)
    {
        if (number1 == pow(number2, i))
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    //task 1
    /*double number1, number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;
    cout << "The greater number is " << max(number1, number2) << endl;
    return 0;*/

    //task 2
    //PrintAllPrimeNumbers1To100();
    //return 0;

    //task 3
    //printPrimePalindroms(10);
    //return 0;

    //task 4
    /*int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << number << (isPowerOf2(number) ? " is " : " isn't ") << "power of 2.\n";

    return 0;*/

    //task 5
    int number1, number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;
    int power = powerOfANumber(number1, number2);
    if (power >= 0)
    {
        cout << number1 << " is " << number2 << "^" << power << endl;
    }
    else
    {
        cout << number1 << " isn't power of " << number2 << endl;
    }
    

    return 0;
}
