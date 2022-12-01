#include <iostream>
using namespace std;

const int MAX_ROWS = 100, MAX_COLS = 100;

void inputMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void transposedMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    for (int row = 0; row < cols; row++)
    {
        for (int col = 0; col < rows; col++)
        {
            cout << matrix[col][row] << " ";
        }
        cout << endl;
    }
}

bool matrixIsSymetrical(int matrix[MAX_ROWS][MAX_COLS], int size)
{
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if (row != col)
            {
                if (matrix[row][col] != matrix[col][row])
                {
                    return false;
                }
            }
        }
    }
    return true;
}

void multiplyMatixes(int matrix1[MAX_ROWS][MAX_COLS], int rows1, int cols1, int matrix2[MAX_ROWS][MAX_COLS], int rows2, int cols2)
{
    int sum = 0, counter = 0;
    int multiplyedMatrix[MAX_ROWS][MAX_COLS];
    for (int row = 0; row < rows1; row++)
    {
        for (int col = 0; col < cols2; col++)
        {
            while (counter < cols1)
            {
                sum += matrix1[row][0 + counter] * matrix2[0 + counter][col];
                counter++;
            }
            multiplyedMatrix[row][col] = sum;
            counter = 0;
            sum = 0;
        }
    }
    for (int row = 0; row < rows1; row++)
    {
        for (int col = 0; col < cols2; col++)
        {
            cout << multiplyedMatrix[row][col] << " ";
        }
        cout << endl;
    }
}

int main()
{
    //task 1
    /*int rows, cols, arr[MAX_ROWS][MAX_COLS];
    cin >> rows >> cols;
    inputMatrix(arr, rows, cols);
    transposedMatrix(arr, rows, cols);*/

    //task 2
    /*int size, matrix[MAX_ROWS][MAX_COLS];
    cin >> size;
    inputMatrix(matrix, size, size);
    cout << (matrixIsSymetrical(matrix, size) ? "YES\n" : "NO\n");*/

    //task 3
    int matrix1[MAX_ROWS][MAX_COLS], 
        matrix2[MAX_ROWS][MAX_COLS],
        rows1, cols1, rows2, cols2;
    cin >> rows1 >> cols1;
    inputMatrix(matrix1, rows1, cols1);
    cin >> rows2 >> cols2;
    inputMatrix(matrix2, rows2, cols2);
    if (cols1 == rows2)
    {
        cout << "YES\n";
        multiplyMatixes(matrix1, rows1, cols1, matrix2, rows2, cols2);
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}