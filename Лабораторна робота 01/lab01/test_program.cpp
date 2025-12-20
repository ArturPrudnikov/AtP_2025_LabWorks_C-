#include <iostream>

using namespace std;

int main()
{
    int y = 128;
    double x = -25.6;
    double z, s;

    double q = 0.123;

    cout <<"x=" << x << "\n";
    cout <<"y="<< y << "\n";

    cout << "You enter z= ";
    cin >> z;
    s = x + y + z;

    cout <<"Summa: s="<< s << "\n";

    return 0;
}