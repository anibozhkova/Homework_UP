#include <iostream>
using namespace std;

const unsigned MAX_SIZE = 100;

void inputArray(int array[MAX_SIZE], int n)
{
	for (int i = 0; i < n && i < MAX_SIZE; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> array[i];
	}
}

void printArray(int array[MAX_SIZE], int n)
{
	for (int i = 0; i < n && i < MAX_SIZE; i++)
	{
		cout << "arr[" << i << "] = " << array[i] << endl;
	}
}

double average(int array[MAX_SIZE], int n)
{
	printArray(array, n);
	double sum = 0;
	for (int i = 0; i < n && i < MAX_SIZE; i++)
	{
		sum += array[i];
	}
	return sum / n;
}

void reverse(int array[MAX_SIZE], int n)
{
	int temp[MAX_SIZE];
	for (int i = n - 1; i >= 0; i--)
	{
		temp[n - 1 - i] = array[i];
	}
	for (int i = 0; i < n; i++)
	{
		array[i] = temp[i];
	}
	printArray(array, n);
}

void minMax(int array[MAX_SIZE], int n)
{
	int min = INT32_MAX, max = INT32_MIN, secondMin = INT32_MAX, secondMax = INT32_MIN;
	for (int i = 0; i < n; i++)
	{
		if (min > array[i])
		{
			min = array[i];
		}
		if (max < array[i])
		{
			max = array[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (min < array[i] && secondMin > array[i])
		{
			secondMin = array[i];
		}
		if (max > array[i] && secondMax < array[i])
		{
			secondMax = array[i];
		}
	}
	cout << "Min = " << min << endl;
	cout << "Max = " << max << endl;
	cout << "Second Min = " << secondMin << endl;
	cout << "Second Max = " << secondMax << endl;
}

void duplicates(int array[MAX_SIZE], int n, int k)
{
	int counter = 0;
	int pos[MAX_SIZE];
	for (int i = 0; i < n; i++)
	{
		if (array[i] == k)
		{
			pos[counter++] = i;
		}
	}

	cout << counter << endl;
	printArray(pos, counter);
}

bool isMirrored(int array[MAX_SIZE], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		if (array[i] != array[n - 1 - i])
		{
			return false;
		}
	}
	return true;
}

bool isInteresting(int n)
{
	while (n > 0)
	{
		if (n % 10 < (n / 10) % 10)
		{
			return false;
		}
		n /= 10;
	}
	return true;
}

void arrayInterestingValues(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << (isInteresting(arr[i]) ? "YES\n" : "NO\n");
	}
}


int main()
{
	//task 0
	/*int arr[MAX_SIZE], n;
	cin >> n;
	inputArray(arr, n);
	cout << average(arr, n);*/

	//task 1
	/*int arr[4] = { 1,2,3,4 };
	reverse(arr, 4);*/

	//task 2
	/*int arr[5] = { 1,2,3,4,5 };
	minMax(arr, 5);*/

	//task 3
	/*int arr[6] = { 1,3,3,3,5,3 };
	duplicates(arr, 6, 3);*/

	//task 4
	/*int arr[5] = { 1,2,3,2,1 };
	cout << (isMirrored(arr, 5)? "YES\n": "N\n");*/

	//task 5
	int n;
	int arr[MAX_SIZE];
	cin >> n;
	inputArray(arr, n);
	arrayInterestingValues(arr, n);

}