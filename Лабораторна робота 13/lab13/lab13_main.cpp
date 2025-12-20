#include <iostream>
#include <iomanip>
#include <windows.h> // для SetConsoleOutputCP

using namespace std;

void fillArray(int **arr, int rows, int columns);
void fillArray2(int **arr, int rows, int columns);
void printArray(int **arr, int rows, int columns);
void sumColumns(int **arr, int rows, int columns, int *sums);

int main() {
    // Перемикаємо консоль у UTF-8
    SetConsoleOutputCP(CP_UTF8);
    
    // Вводимо розмірність масиву N*M
    int n, m;
    cout << "Введіть кількість рядків (N): ";
    cin >> n;
    cout << "Введіть кількість стовпців (M): ";
    cin >> m;

    // створюємо двовимірний динамічний масив
    int  **arr = new int*[n];
    for (int i=0; i<n; i++) {
        arr[i] = new int[m];
    }

    // наповнення масиву за певною закономірністю
    fillArray(arr, n, m);
    // fillArray2(arr, n, m);

    // Виведення масиву
    printArray(arr, n, m);

    // Розрахунок суми елементів в стовпцях
    int *sums = new int[m];
    sumColumns(arr, n, m, sums);

    // Виведення сум по стовпцях
    cout << "\nСума елементів у кожному стовпці:" << endl;
    for (int j = 0; j < m; j++)
        cout << setw(4) << sums[j];
    cout << endl;

    // звільнення пам’яті
    for (int i = 0; i < n; i++)
        delete[] arr[i];
    delete[] arr;
    delete[] sums;

    return 0;
}

// 1) Функція заповнення масиву
void fillArray(int **arr, int rows, int columns) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            if (i % 2 == 0) {
                arr[i][j] = columns*i + (j + 1);
            } else {
                arr[i][j] = (i+1)*columns - j;
                // arr[i][j] = i*columns + (columns - j);
            }
        }
    }
}

// 1) Функція заповнення масиву -- альтернативний варіант
void fillArray2(int **arr, int rows, int columns) {
    int value = 1; // лічильник - значення елементу
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            // парний рядок — зліва направо
            for (int j = 0; j < columns; j++)
                arr[i][j] = value++;
        } else {
            // непарний рядок — справа наліво
            for (int j = columns - 1; j >= 0; j--)
                arr[i][j] = value++;
        }
    }
}

// 2) Функція виведення масиву
void printArray(int **arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            cout << setw(4) << arr[i][j];
        cout << endl;
    }
}

// 3) Функція знаходження суми у стовпцях
void sumColumns(int **arr, int rows, int columns, int *sums) {
    for (int j = 0; j < columns; j++) {
        sums[j] = 0;
        for (int i = 0; i < rows; i++)
            sums[j] += arr[i][j];
    }
}