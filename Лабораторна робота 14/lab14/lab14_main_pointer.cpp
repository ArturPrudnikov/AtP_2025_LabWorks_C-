#include <iostream>
#include <windows.h> // для SetConsoleOutputCP

using namespace std;

void sumSeries(int n, int N, double *result) {
    *result = 0.0;
    for (int i = n; i <= N; i++) {
        *result += (i * (i - 7)) / 8.0;
    }
}

int main() {
    // Перемикаємо консоль у UTF-8
    SetConsoleOutputCP(CP_UTF8);

    int n, N;
    double sum;

    cout << "Введіть n (початкове значення діапазону): ";
    cin >> n;
    cout << "Введіть N (кінцеве значення діапазону): ";
    cin >> N;

    if (n == N) {
        cout << "[x] n та N не можуть жути однаковими!";
        return 0;
    } 
    if (n > N) {
        cout << "[!] n не може бути більше N - змінюємо n <=> N" << endl;
        swap(n, N);
    }

    sumSeries(n, N, &sum);

    cout << "Сума ряду = " << sum << endl;
    return 0;
}