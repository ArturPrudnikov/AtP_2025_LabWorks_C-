// Введення, де дані отримуються з рядкового потоку
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> numbers;
    string line;

    cout << "Enter sequence of numbers (space-separated): ";
    getline(cin, line);  // читаємо цілий рядок

    stringstream ss(line);
    int x;
    while (ss >> x)
        numbers.push_back(x);

    cout << "\nYou entered " << numbers.size() << " numbers:" << endl;
    for (int n : numbers)
        cout << n << " ";

    return 0;
}