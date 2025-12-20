#include <iostream>
#include <limits>
#include <windows.h> // для SetConsoleOutputCP

using namespace std;

int main() {
    // Перемикаємо консоль у UTF-8
    SetConsoleOutputCP(CP_UTF8);
    
    // створення масиву
    const int size = 6;
    double numbers[size];
    // float numbers[size];

    // Введення 6 дійсних чисел
    cout << "Введіть 6 дійсних чисел:\n";
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    // Ініціалізація максимального і мінімального значення
    double max = numeric_limits<double>::lowest();
    double min = numeric_limits<double>::max();
    // для типу float:
    // float max = numeric_limits<float>::lowest();
    // float min = numeric_limits<float>::max();

    // Знаходження максимального і мінімального елементів
    for (int i = 0; i < size; ++i) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // Виведення результатів
    cout << "Максимальний елемент: " << max << endl;
    cout << "Мінімальний елемент: " << min << endl;
    cout << "Максимальний елемент більший за мінімальний на: " << (max - min) << endl;

    return 0;
}