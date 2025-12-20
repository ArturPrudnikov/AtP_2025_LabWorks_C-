// Введення де кінець послідовності визначається
// значенням 0 - у разі, коли це значення не входить 
// до множини дозволених значень
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int buff;

    cout << "Enter numbers (enter 0 to end):" << endl;

    while (true) {
        cin >> buff;
        if (buff == 0) break;  // умова завершення
        numbers.push_back(buff);
    }

    cout << "\nTotal " << numbers.size() << " numbers:" << endl;
    for (int n : numbers)
        cout << n << " ";

    return 0;
}