#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return n % 10 + sumOfDigits(n / 10);
}

int recStrlen(const char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	return 1 + recStrlen(++str);
}

int pow(int n, int p)
{
	if (p == 0)
	{
		return 1;
	}
	return n * pow(n, p - 1);
}

int reverse(int n, int acc)
{
	if (n == 0)
	{
		return acc;
	}
	return reverse(n / 10, (acc * 10) + n % 10);
}

int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
}

bool areEqual(const char* str1, const char* str2)
{
	if (*str1 != *str2)
	{
		return false;
	}
	if (*str1 == '\0' && *str2 == '\0')
	{
		return true;
	}
	return areEqual(str1 + 1, str2 + 1);
}

int smallest(int* arr, int length, int element = INT32_MAX)
{
	if (length == 0)
	{
		return element;
	}
	return smallest(arr + 1, length - 1, (*arr < element ? *arr : element));
}

void evaluate(const char* str, int upper = 0, int lower = 0, int digits = 0)
{
	if (*str == '\0')
	{
		cout << "Upper case letters: " << upper << "\n";
		cout << "Lower case letters: " << lower << "\n";
		cout << "Numbers: " << digits << "\n";
		return;
	}
	if (*str >= 'A' && *str <= 'Z')
	{
		evaluate(str + 1, upper + 1, lower, digits);
		return;
	}
	else if (*str >= 'a' && *str <= 'z')
	{
		evaluate(str + 1, upper, lower + 1, digits);
		return;
	}
	else if (*str >= '0' && *str <= '1')
	{
		evaluate(str + 1, upper, lower, digits + 1);
		return;
	}
	evaluate(str + 1, upper, lower, digits);
}

void hanoiTowers(int n, char start, char help, char end)
{
	if (n == 0)
	{
		return;
	}
	hanoiTowers(n - 1, start, end, help);
	cout << "Move disk " << n << " from " << start << " to " << end << "\n";
	hanoiTowers(n - 1, help, start, end);
}

int main()
{
	//task 0
	cout << sumOfDigits(154) << "\n";

	//task 1
	cout << recStrlen("Happy new year") << "\n";

	//task 2
	cout << reverse(1123, 0) << "\n";

	//task 3
	cout << factorial(5) << "\n";

	//task 4
	cout << boolalpha << areEqual("Hello!", "Hello ") << "\n";

	//task 5 -> skipped

	//task 6
	int arr[6] = { 4, 3, 1, 2, 6, 8 };
	cout << smallest(arr, 6);

	//task 8
	evaluate("3 Digits");

    return 0;
}