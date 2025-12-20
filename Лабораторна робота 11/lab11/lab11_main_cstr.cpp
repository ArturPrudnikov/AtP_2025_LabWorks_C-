#include <iostream>
#include <cstring>   // для strlen, strtok
#include <iomanip>   // для форматування виводу
#include <windows.h> // для SetConsoleOutputCP
using namespace std;

int main() {
    // Перемикаємо консоль у UTF-8
    SetConsoleOutputCP(CP_UTF8);

    const int SIZE = 256;
    char text[SIZE];

    cout << "Введіть рядок: ";
    cin.getline(text, SIZE);

    char delimiters[] = " ,.!?;:-\t\n";  // символи, які розділяють слова
    char* word = strtok(text, delimiters);

    int wordCount = 0;
    int totalLength = 0;

    cout << "\nСлова довжиною менше 6 символів:\n";

    while (word != nullptr) {
        ++wordCount;
        int len = strlen(word);
        totalLength += len;

        if (len < 6) {
            cout << setw(2) << wordCount << ") " << word << " (довжина: " << len << ")\n";
        }

        word = strtok(nullptr, delimiters);
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