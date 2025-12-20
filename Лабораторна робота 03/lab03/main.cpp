#include <iostream>
#include <windows.h> // для SetConsoleOutputCP

using namespace std;

int main() {
    
    // Перемикаємо консоль у UTF-8
    SetConsoleOutputCP(CP_UTF8);

    int size;

    cout << "Введіть розмір у символах: ";
    //cout << "Enter size: ";
    cin >> size;

    if (size <= 0) {
        cout << "ERROR: size must be greater than zero!";
        return 1;
    }

    cout << "Building triangle with size " << size << "x" << size << " :" << endl;

    for (int row=0; row<size; row++) {
        for (int col=0; col<=row; col++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}