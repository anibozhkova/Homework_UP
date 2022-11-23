#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void inputIntArray(int arr[], int size)
{
    cout << "Enter array values: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
}


int length(char arr[])
{
    int i = 0, count = 0;
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

bool isPalindrome(char arr[])
{
    int n = length(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            return false;
        }
    }
    return true;
}

void multiplyArray(int arr[], int n, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= n;
    }
}

void multiplyArray(double arr[], double n, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= n;
    }
}

void reverse(int arr[], int n)
{
    int reversedArr[MAX_SIZE];
    for (int i = 0; i < n; i++)
    {
        reversedArr[i] = arr[n - 1 - i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = reversedArr[i];
    }
}

int main()
{
    //task 1
   /* int arr[MAX_SIZE];
    int n;
    cout << "Enter array size: ";
    do
    {
        cin >> n;
    } while (n > MAX_SIZE || n <= 0);

    inputIntArray(arr, n);

    cout << "Even numbers in this array: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;*/

    //task 2
    /*int arr[MAX_SIZE];
    int n;
    cout << "Enter array size: ";
    do
    {
        cin >> n;
    } while (n > MAX_SIZE || n <= 0);

    inputIntArray(arr, n);

    for (int i = 0; i < n; i += 2)
    {
        cout << arr[i] << " ";
    }
    cout << endl;*/

    //task 3
    /*int arr[MAX_SIZE];
    int n;
    cout << "Enter array size: ";
    do
    {
        cin >> n;
    } while (n > MAX_SIZE || n <= 0);

    inputIntArray(arr, n);

    int count = 0;
    for (int i = 1; i < n - 1; i += 2)
    {
        if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
        {
            count++;
        }
    }
    cout << count;*/

    //task 4
    /*char arr[MAX_SIZE];
    cin.getline(arr, MAX_SIZE);
    cout << length(arr) << endl;
    return 0;*/

    //task 5
    /*char arr[MAX_SIZE];
    cin.getline(arr, MAX_SIZE);
    cout << (isPalindrome(arr) ? "YES\n" : "NO\n");
    return 0;*/

    //task 6
    /*int arr[MAX_SIZE];
    int size, n;
    cout << "Enter array size: ";
    do
    {
        cin >> size;
    } while (size > MAX_SIZE || size <= 0);

    inputIntArray(arr, size);

    cout << "Enter a number: ";
    cin >> n;

    multiplyArray(arr, n, size);
    
    cout << "Multiplied array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Double array multiplication:\n";
    double doubleArr[] = {1, 2.5, 4.6};
    multiplyArray(doubleArr, 4.2, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << doubleArr[i] << " ";
    }
    cout << endl;*/

    //task 7
    int arr[MAX_SIZE], n;
    cin >> n;
    inputIntArray(arr, n);
    reverse(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}