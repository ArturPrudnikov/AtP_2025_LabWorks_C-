#include <iostream>
#include <string>
#include <sstream>   // для роботи з потоками рядків
#include <iomanip>   // для форматування виводу setprecision
#include <windows.h> // для SetConsoleOutputCP

using namespace std;

int main() {
    //setlocale(LC_ALL, "ukr");
    // Перемикаємо консоль у UTF-8
    SetConsoleOutputCP(CP_UTF8);

    string text;
    cout << "Введіть рядок: ";
    getline(cin, text);

    stringstream ss(text);
    string word;
    int wordCount = 0;
    int totalLength = 0;

    cout << "\nСлова довжиною менше 6 символів:\n";

    while (ss >> word) {
        ++wordCount;
        totalLength += word.length();

        if (word.length() < 6) {
            cout << setw(2) << wordCount << ") " << word << " (довжина: " << word.length() << ")\n";
        }
    }

    if (wordCount > 0) {
        double avgLength = static_cast<double>(totalLength) / wordCount;
        cout << fixed << setprecision(2);
        cout << "\nСередня довжина слів у рядку: " << avgLength << endl;
    } else {
        cout << "У рядку немає слів!" << endl;
    }

    return 0;
}