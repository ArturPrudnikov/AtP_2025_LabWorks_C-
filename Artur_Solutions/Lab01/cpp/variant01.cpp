#include <iostream>
using namespace std;
int main(){
    int aInt, hInt, pInt, sInt;
    cout << "INT version\nEnter side a: "; cin >> aInt;
    cout << "Enter height h: "; cin >> hInt;
    pInt = 4 * aInt; sInt = aInt * hInt;
    cout << "Perimeter = " << pInt << "\nArea = " << sInt << "\n\n";
    float aFloat, hFloat, pFloat, sFloat;
    cout << "FLOAT version\nEnter side a: "; cin >> aFloat;
    cout << "Enter height h: "; cin >> hFloat;
    pFloat = 4.0f * aFloat; sFloat = aFloat * hFloat;
    cout << "Perimeter = " << pFloat << "\nArea = " << sFloat << "\n";
    return 0;
}
