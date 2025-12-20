// Введення де кінець послідовності визначається
// спец. клавіатурною комбінацією (Ctrl+Z / Ctrl+D)
// або послідовністю нечислових символів (літери)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int buff;

    cout << "Enter numbers (Ctrl+Z to end):" << endl;

    while (cin >> buff) {      // цикл триває, поки введення коректне
        numbers.push_back(buff);
    }

    cout << "\nEntered " << numbers.size() << " numbers:" << endl;
    for (int n : numbers)
        cout << n << " ";

    return 0;
}