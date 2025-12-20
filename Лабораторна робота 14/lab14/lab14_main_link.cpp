#include <iostream>
using namespace std;

void sumSeries(int n, int N, double &result) {
    result = 0.0;
    for (int i = n; i <= N; i++) {
        result += (i * (i - 7)) / 8.0;
    }
}

int main() {
    int n, N;
    double sum;

    cout << "Введіть початковий n (початкове значення діапазону): ";
    cin >> n;
    cout << "Введіть кінцевий N (кінцеве значення діапазону): ";
    cin >> N;

    if (n == N) {
        cout << "[x] n та N не можуть бути однаковими!";
        return 0;
    } 
    if (n > N) {
        cout << "[!] n не може бути більше N - змінюємо n <=> N" << endl;
        swap(n, N);
    }

    sumSeries(n, N, sum);

    cout << "Сума ряду = " << sum << endl;
    return 0;
}