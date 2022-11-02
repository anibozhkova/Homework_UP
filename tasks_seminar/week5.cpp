#include <iostream>
using namespace std;

int main()
{
    //task 0
    /*int number, firstDigit, secondDigit, thirdDigit, fourthDigit;
    cout << "Enter a number: ";
    cin >> number;
    firstDigit = number / 1000;
    secondDigit = number / 100 % 10;
    thirdDigit = number / 10 & 10;
    fourthDigit = number % 10;
    if (firstDigit == 5 || secondDigit == 5 || thirdDigit == 5 || fourthDigit == 5)
    {
        if (number % 5 == 0)
        {
            cout << "The number contains the digit 5 and is devsible by 5!" << endl;
        }
        else if (number % 2 == 0)
        {
            cout << "The number contains the digit 5 and is even!" << endl;
        }
        else
        {
            cout << "The number contains the digit 5 and is not even!" << endl;
        }
    }
    else if(number % 2 == 0)
    {
        cout << "The number doesn't contain the digit 5 and it is even." << endl;
    }
    else
    {
        cout << "The number doesn't contain the digit 5 and it is not even." << endl;
    }*/

    //task 1
    /*int n, factorial = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n == 0)
    {
        cout << "0! = 1" << endl;
    }
    else if (n > 0)
    {
        for (int i = 2; i <= n; i++)
        {
            factorial *= i;
        }
        cout << n << "! = " << factorial;
    }
    else
    {
        cout << "The number has to be positive." << endl;
    }*/

    //task 2
    /*int number, sum = 0;
    cout << "Enter random numbers:";
    do
    {
        cin >> number;
        sum += number;
    } while (number != 0);
    cout << "The sum is " << sum << endl;*/

    //task 3
    //int number, sum = 0;
    //cout << "Enter a number: ";
    //cin >> number;
    //while (number)//number != 0 === number > 0
    //{
    //    sum += number % 10;
    //    number /= 10;
    //}
    //cout << "The sum of the dgits is " << sum << endl;

    //task 4
    /*int number;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> number;
    if (number == 0 || number == 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= number / 2; ++i)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
    {
        cout << "Is the number is prime." << endl;
    }
    else
    {
        cout << "Is the number is not prime." << endl;
    }
    return 0;*/

    //bonus task 4
    /*int number;
    bool flag = false;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 2; i <= number; i++)
    {
        flag = false;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << i << " ";
        }
    }
    cout << endl;*/

    //task 5
    /*int number;
    do
    {
        cout << "Enter a number: ";
        cin >> number;
    } while (number <= 0);
    
    int previousNumber = 0, currentNumber = 1, nextNumber;
    for (int i = 0; i < number; i++)
    {
        nextNumber = previousNumber + currentNumber;
        cout << nextNumber << " ";
        previousNumber = currentNumber;
        currentNumber = nextNumber;
    }*/

    //task 6
    int n, minusCount = 0;
    do
    {
        cout << "Entrer a number: ";
        cin >> n;
    } while (n <= 0);
    while (n > 0)
    {
        for (int i = 0; i < minusCount; i++)
        {
            cout << "-";
        }
        for (int i = n; i > 0; i--)
        {
            cout << "+";
        }
        cout << endl;
        minusCount++;
        n--;
    }
    cout << endl;
}