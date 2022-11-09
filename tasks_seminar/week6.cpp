
#include <iostream>
using namespace std;

int abd(int n)
{
    return n > 0 ? n : n * (-1);
}

int pow(int n, int p)
{
    int power = 1;
    for (int i = 0; i < p; i++)
    {
        power *= n;
    }
    return power;
}

double min(double a, double b)
{
    return a > b ? b : a;
}

long max(long a, long b)
{
    return a < b ? b : a;
}

int minInt(int a, int b)
{
    return a > b ? b : a;
}

int minOfThree(int a, int b, int c)
{
    return minInt(minInt(a, b), c);
}

long maxOfThree(double a, double b, double c)
{
    return max(max(a, b), c);
}

bool isLower(char c)
{
    return c >= 'a' && c <= 'z';
}

bool isUpper(char c)
{
    return c >= 'A' && c <= 'Z';
}

bool isLetter(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isDigit(char c)
{
    return c >= '0' && c <= '9';
}

char toUpper(char c)
{
    if (isLower(c))
    {
        return c - ('a' - 'A');
    }
    return c;
}

char toLower(char c)
{
    if (isUpper(c))
    {
        return c + ('a' - 'A');
    }
    return c;
}

int countDigit(int n, int d)
{
    int counter = 0;
    while (n != 0)
    {
        if (n % 10 == d)
        {
            counter++;
        }
        n /= 10;
    }
    return counter;
}

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isDoublePrime(int a, int b)
{
    return isPrime(a) && isPrime(b) && a + 2 == b;
}

int main()
{
    //task 0
    /*int n;
    cout << "Enter n: ";
    cin >> n;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int fact = 1;
            for (int k = 1; k <= counter; k++)
            {
                if (counter == 0)
                {
                    fact = 1;
                    break;
                }
                fact *= k;
            }
            counter++;
            cout << fact << " ";
        }
        cout << endl;
    }*/

    //task 1
   /* cout << abs(-1) << endl;
    cout << pow(2, 3) << endl;
    cout << min(2, 3) << endl;
    cout << max(2, 3) << endl;
    cout << minOfThree(1, 2, 3) << endl;
    cout << maxOfThree(1, 2, 3) << endl;
    cout << boolalpha << isLower('a') << endl;
    cout << boolalpha << isUpper('a') << endl;
    cout << boolalpha << isLetter('%') << endl;
    cout << toUpper('a') << endl;
    cout << toLower('A') << endl;*/

    //task 2
    //cout << countDigit(1112223, 3) << endl;

    //task 3
    cout << boolalpha << isDoublePrime(11, 13);
}
