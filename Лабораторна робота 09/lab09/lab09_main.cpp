#include <iostream>
#include <cmath>
#include <windows.h> // для SetConsoleOutputCP

using namespace std;

// Функція перевірки простоти числа
bool isPrime(int n) {
    if (n < 2) return false;          // 0, 1, від’ємні — не прості
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false; // має дільник → не просте
    }
    return true;                      // якщо дільників не знайдено
}

int main() {
    // Перемикаємо консоль у UTF-8
    SetConsoleOutputCP(CP_UTF8);

    int n;
    cout << "Введіть кількість чисел: ";
    cin >> n;

    if (n <= 0) {
        cout << "Невірна кількість елементів!" << endl;
        return 1;
    }

    // Створення динамічного масиву
    int* arr = new int[n];

    cout << "Введіть " << n << " цілих чисел: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << endl << "Прості числа серед введених: ";

    bool hasPrime = false;  // прапорець — чи знайдено прості

    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            cout << arr[i] << " ";
            hasPrime = true;
        }
    }

    if (!hasPrime)
        cout << "немає простих чисел.";

    cout << endl;

    delete[] arr;  // звільнення пам'яті
    return 0;
}