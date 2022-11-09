#include <iostream>
using namespace std;

int main()
{
    //task 1
    /*int number;
	do
	{
		cout << "Enter a number: ";
		cin >> number;
	} while (number < 10 || number > 99 || number > -10 || number < -99);*/

	//task 2
	int n, count;
	cout << "Enter a number: ";
	cin >> n;
	for (int i = n - 1; i >= 0; i--)
	{
		count = 0;
		while (count < i)
		{
			cout << " ";
			count++;
		}
		for (int j = 0; j < n - i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = 1; i < n; i++)
	{
		count = 0;
		while (count < i)
		{
			cout << " ";
			count++;
		}
		for (int j = n - i; j > 0; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}

	//task 3
	/*int n, factorial = 1;
	cout << "Enter a number: ";
	cin >> n;
	if (n == 0)
	{
		cout << "0! = 1\n";
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
		cout << "Cannot calculate\n";
	}*/

	//task 4
	/*int firstDigit, secondDigit, thirdDigit;
	for (int i = 102; i <= 999; i++)
	{
		firstDigit = i / 100;
		secondDigit = (i / 10) % 10;
		thirdDigit = i % 10;
		if (firstDigit != secondDigit && firstDigit != thirdDigit && secondDigit != thirdDigit)
		{
			cout << i << " ";
		}
	}
	cout << endl;*/

	//task 5
	/*int firstDigit, secondDigit, thirdDigit;
	for (int i = 111; i <= 999; i++)
	{
		firstDigit = i / 100;
		secondDigit = (i / 10) % 10;
		thirdDigit = i % 10;
		if (firstDigit * secondDigit * thirdDigit == 0)
		{
			continue;
		}
		if (i % (firstDigit * secondDigit * thirdDigit) == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;*/
}