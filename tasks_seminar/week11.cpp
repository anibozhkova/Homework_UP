#include <iostream>
#include <ctime>
#include <random>

using namespace std;

int strLen(const char* str)
{
	int result = 0;
	while (*str != '\0')
	{
		result++;
		str++;
	}
	return result;
}

void strcpy(const char* source, char*& destination)
{
	if (destination != nullptr)
	{
		delete[] destination;
	}
	int length = strLen(source) + 1;
	destination = new char[length];
	for (int i = 0; i < length; i++)
	{
		destination[i] = source[i];
	}
	destination[length - 1] = '\0';
}

char* strCat(const char* str1, const char* str2)
{
	int str1Len = strLen(str1);
	int str2Len = strLen(str2);
	int length = strLen(str1) + strLen(str2) + 1;
	char* result = new char[length];
	strcpy(str1, result);
	for (int i = str1Len, j = 0; i < length && j < str2Len; i++, j++)
	{
		result[i] = str2[j];
	}
	result[length - 1] = '\0';

	return result;
}

int strcmp(char* str1, char* str2)
{
	if (strLen(str1) < strLen(str2))
	{
		return -1;
	}
	if (strLen(str1) > strLen(str2))
	{
		return 1;
	}
	if (strLen(str1) == strLen(str2))
	{
		return 0;
	}
}

void reverse(char* str)
{
	char* reversed = new char[strLen(str) + 1];
	for (int i = 0, j = strLen(str) - 1; i <= strLen(reversed) && j >= 0; i++, j--)
	{
		reversed[i] = str[j];
	}
	reversed[strLen(reversed)] = '\0';
	for (int i = 0; i < strLen(str) + 1; i++)
	{
		str[i] = reversed[i];
	}
	delete[] reversed;
}

void replace(char* str, char oldSymbol, char newSymbol)
{
	for (int i = 0; i < strLen(str) + 1; i++)
	{
		if (str[i] == oldSymbol)
		{
			str[i] = newSymbol;
		}
	}
}

int find(char* str, char symbol)
{
	for (int i = 0; i < strLen(str) + 1; i++)
	{
		if (str[i] == symbol)
		{
			return i;
		}
	}
	return -1;
}

int count(char* str, char symbol)
{
	int count = 0;
	for (int i = 0; i < strLen(str) + 1; i++)
	{
		if (str[i] == symbol)
		{
			count++;
		}
	}
	return count;
}

char* substr(const char* str, int start, int end)
{
	char* substr = new char[end - start + 1];
	for (int i =start, j = 0; i <= end; i++, j++)
	{
		substr[j] = str[i];
	}
	substr[strLen(substr)] = '\0';
	return substr;
}

bool strstr(char* str1, char* str2)
{

	for (int i = 0; i < strLen(str1) + 1 - strLen(str2); i++)
	{
		if (str1[i] == str2[0])
		{
			for (int j = 1; j < strLen(str2) + 1; j++)
			{
				if (str1[i + j] != str2[j])
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;

}

int main()
{
	const char* str1 = "abcdef";
	char* str2 = nullptr;
	strcpy(str1, str2);
	cout << str2 << endl;
	
	char* str3 = strCat(str1, str2);
	cout << str3 << "\n";
	delete[] str1;
	delete[] str2;
	delete[] str3;

	//wordle
	char word[6];

	srand(time(0));
	int randNumber = rand() & 10;

	for (int i = 0; i < 5; i++)
	{
		word[i] = 'a' + rand() % 26;
	}

	char guess[6];
	bool notFound = true;
	for (int i = 0; i < 6 && notFound; i++)
	{
		cin.getline(guess, 6);
	}
    return 0;
}