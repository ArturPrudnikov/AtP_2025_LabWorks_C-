#include <iostream>
#include <locale>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "uk_UA.UTF-8");

    int lower_bound, upper_bound, divider1, divider2;

    cout << "Enter lower bound (A): ";
    cin >> lower_bound;
    cout << "Enter upper bound (B): ";
    cin >> upper_bound;
    cout << "Enter first divider (C): ";
    cin >> divider1;
    cout << "Enter second divider (D): ";
    cin >> divider2;
    //cout << lower_bound << " " << upper_bound << " " << divider1 << " " << divider2 << endl;
 
    if (lower_bound < 0 || upper_bound < 0 || divider1 < 0 || divider2 < 0) {
        cout << "ERROR: all numbers must be greater than 0!";
        return 1;
    }

    if (upper_bound <= lower_bound) {
        cout << "ERROR: B must be greater then A!";
        return 1;
    }
    
    // цикл перебору значень на діапазоні A..B
    for (int i=upper_bound; i>=lower_bound; i--) {
        if (i%divider1==0 && i%divider2==0) {
            cout << i << endl;
        }
    }

    return 0;
}