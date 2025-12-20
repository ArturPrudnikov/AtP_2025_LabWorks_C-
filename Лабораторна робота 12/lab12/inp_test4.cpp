// спосіб, в якому використовується динамічний масив
// кожного разу, коли відведений об'єм масиву вичерпується
// масив перестворюється з подвоєним об'ємом відносно попереднього
#include <iostream>
using namespace std;

int main() {
    int* arr = nullptr;   // покажчик на динамічний масив
    int size = 0;         // поточна кількість елементів
    int capacity = 5;     // початковий розмір масиву
    arr = new int[capacity];

    cout << "Enter numbers (0 to finish):" << endl;

    int x;
    while (true) {
        cin >> x;
        if (x == 0) break;  // умова завершення

        // Якщо масив заповнено — збільшуємо розмір у 2 рази
        if (size == capacity) {
            capacity *= 2;
            int* newArr = new int[capacity];

            // копіюємо старі дані в новий масив
            for (int i = 0; i < size; i++)
                newArr[i] = arr[i];

            delete[] arr;  // звільняємо стару пам’ять
            arr = newArr;
        }

        arr[size++] = x; // додаємо новий елемент
    }

    if (size == 0) {
        cout << "There are no numbers!" << endl;
        delete[] arr;
        return 0;
    }

    // Обчислення середнього арифметичного
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    double avg = sum / size;

    cout << "\nYou entered " << size << " numbers." << endl;
    cout << "(Array size: " << capacity << " elements)" << endl;
    cout << "Average = " << avg << endl;

    // Вивід усіх чисел
    cout << "Entered numbers: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete[] arr; // звільняємо пам’ять
    return 0;
}