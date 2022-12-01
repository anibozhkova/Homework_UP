#include <iostream>
using namespace std;
const int MAX_ROWS_COLS = 100;

void inputMatrix(int matrix[MAX_ROWS_COLS][MAX_ROWS_COLS], int rows, int cols)
{
	cout << "Input matrix:\n";
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			cin >> matrix[row][col];
		}
	}
	cout << endl;
}

void inputArray(int arr[MAX_ROWS_COLS], int size)
{
	cout << "Input array:\n";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void printMatrix(int matrix[MAX_ROWS_COLS][MAX_ROWS_COLS], int rows, int cols)
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			cout << matrix[row][col] << " ";
		}
		cout << endl;
	}
}

//task 1
int indexOfColumn(int matrix[MAX_ROWS_COLS][MAX_ROWS_COLS], int rows, int cols, int arr[MAX_ROWS_COLS], int size)
{
	int index = 0, count = 0, maxCount = 0;
	for (int col = 0; col < cols; col++)
	{
		for (int row = 0; row < rows; row++)
		{
			if (matrix[row][col] == arr[row])
			{
				count++;
				if (count > maxCount)
				{
					maxCount = count;
					index = col;
				}
			}
			else
			{
				count = 0;
			}
		}
		
	}
	return index;
}

//task 2
void multiplyMatrices(int matrix1[MAX_ROWS_COLS][MAX_ROWS_COLS], int rows1, int cols1, int matrix2[MAX_ROWS_COLS][MAX_ROWS_COLS], int rows2, int cols2, int multiplyedMatrix[MAX_ROWS_COLS][MAX_ROWS_COLS])
{
	int sum = 0, multiplyedRows = rows1, multiplyedCols = cols1, counter = 0;
	multiplyedRows = (multiplyedRows > rows2 ? rows2 : rows1);
	multiplyedCols = (multiplyedCols > cols2 ? cols2 : cols1);
	for (int row = 0; row < multiplyedRows; row++)
	{
		for (int col = 0; col < multiplyedCols; col++)
		{
			while (counter < cols1 && counter < rows2)
			{
				sum += matrix1[row][0 + counter] * matrix2[0 + counter][col];
				counter++;
			}
			multiplyedMatrix[row][col] = sum;
			sum = 0;
			counter = 0;
		}
	}
}

//task 3
void transposeMatrix(int matrix[MAX_ROWS_COLS][MAX_ROWS_COLS], int rows, int cols, int transposedMatrix[MAX_ROWS_COLS][MAX_ROWS_COLS])
{
	for (int row = 0; row < cols; row++)
	{
		for (int col = 0; col < rows; col++)
		{
			transposedMatrix[row][col] = matrix[col][row];
		}
	}
}

//task 4
int matrixDialgonalsSum(int matrix[MAX_ROWS_COLS][MAX_ROWS_COLS], int rows, int cols)
{
	int sum = 0;
	for (int row = 0; row < rows; row++)
	{
		if (row == cols - 1 - row)
		{
			sum += matrix[row][row];
		}
		else
		{
			sum += matrix[row][row] + matrix[row][cols - 1 - row];
		}
	}
	return sum;
}

int main()
{
    //task 1
	/*int m, matrix[MAX_ROWS_COLS][MAX_ROWS_COLS], n, arr[MAX_ROWS_COLS];
	cout << "Input count of matrix rows: ";
	cin >> m;
	inputMatrix(matrix, m, 5);
	cout << "Input size of array: ";
	cin >> n;
	inputArray(arr, n);
	cout << indexOfColumn(matrix, m, 5, arr, n);*/

	//task 2
	/*int matrix1[][MAX_ROWS_COLS] = { {1, 2, 3},
									 {4, 5, 6} };
	int matrix2[][MAX_ROWS_COLS] = { {7, 8},
									 {9, 10},
									 {11, 12} };
	int multiplyedMatrix[MAX_ROWS_COLS][MAX_ROWS_COLS];
	multiplyMatrices(matrix1, 2, 3, matrix2, 3, 2, multiplyedMatrix);
	printMatrix(multiplyedMatrix, 2, 2);*/

	//task 3
	/*int matrix[MAX_ROWS_COLS][MAX_ROWS_COLS], rows, cols, transposedMatrix[MAX_ROWS_COLS][MAX_ROWS_COLS];
	cout << "Input rows of matrix rows: ";
	cin >> rows;
	cout << "Input cols of matrix rows: ";
	cin >> cols;
	inputMatrix(matrix, rows, cols);
	transposeMatrix(matrix, rows, cols, transposedMatrix);
	const int tRows = cols, tCols = rows;
	printMatrix(transposedMatrix, tRows, tCols);*/

	//task 4
	int matrix[][MAX_ROWS_COLS] = { {1, 2, 3},
									{4, 5, 6},
									{7, 8, 9} };
	cout << matrixDialgonalsSum(matrix, 3, 3) << endl;
}