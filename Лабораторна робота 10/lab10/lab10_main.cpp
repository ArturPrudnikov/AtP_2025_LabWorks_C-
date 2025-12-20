#include <iostream>
#include <cmath>     // для математичних функцій
#include <windows.h> // для SetConsoleOutputCP

using namespace std;

// --- Підінтегральна функція (змінюється за варіантом) ---
double integr_func(double x) {
    // приклад: f(x) = sin(x) + x^2
    return sin(x) + x * x;
}

// --- Підінтегральна функція - альтернативний приклад ---
double integr_func2(double x) {
    // f(x) = (sin(x) + cos(4x - x)) / (cos(x) - sin(4x - x))

    // Переведення з градусів у радіани
    // double x = ang * M_PI / 180.0;

    double numerator = sin(x) + cos(x);
    double denominator = cos(x) - sin(x);

    if (fabs(denominator) < 1e-9) {  // запобігання діленню на 0
        return 0;
    }

    return numerator / denominator;
}

// --- Функція для обчислення інтеграла методом прямокутників ---
double rectangle_method(double a, double b, int n) {
    double h = (b - a) / n;  // крок розбиття
    double sum = 0.0;

    // метод середніх прямокутників
    for (int i = 0; i < n; i++) {
        double x_i = a + h * (i + 0.5); // середина підінтервалу
        sum += integr_func2(x_i);
    }

    return sum * h;
}

int main() {
    // Перемикаємо консоль у UTF-8
    SetConsoleOutputCP(CP_UTF8);
    
    cout << "Обчислення визначеного інтеграла методом прямокутників" << endl;

    double a, b;
    int n;

    // --- Введення даних ---
    cout << "Введіть нижню межу інтегрування a: ";
    cin >> a;
    cout << "Введіть верхню межу інтегрування b: ";
    cin >> b;
    cout << "Введіть кількість розбиттів n: ";
    cin >> n;

    // --- Перевірка коректності введених даних ---
    if (a == b) {
        cout << "Помилка: межі інтегрування не можуть бути однаковими!\n";
        return 1;
    } else {
        if (a > b) {
            swap(a, b);
        }
    }

    if (n <= 0) {
        cout << "Помилка: кількість розбиттів має бути додатною!\n";
        return 1;
    }

    // --- Обчислення інтеграла ---
    double result = rectangle_method(a, b, n);

    // --- Виведення результату ---
    cout << "\nІнтеграл від a = " << a << " до b = " << b << " дорівнює: "
         << result << endl;

    return 0;
}