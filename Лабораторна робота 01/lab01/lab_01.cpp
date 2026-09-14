#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double c;
    double alpha;
    double alphaRad;
    double a;
    double h;

    cout << "Enter the length of side c: ";
    cin >> c;

    cout << "Enter the angle alpha in degrees: ";
    cin >> alpha;

    alphaRad = alpha * 3.141592653589793 / 180.0;

    a = c / cos(alphaRad);
    h = c * tan(alphaRad);

    cout << "Side a length = " << a << "\n";
    cout << "Height h length = " << h << "\n";

    return 0;
}