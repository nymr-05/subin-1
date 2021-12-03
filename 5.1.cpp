#include <iostream>
using namespace std;
int main ()
{
    double a1, a2, b1, b2, c1, c2, x, y;
    cout << "a1: "; cin >> a1;
    cout << "b1: "; cin >> b1;
    cout << "c1: "; cin >> c1;
    cout << "a2: "; cin >> a2;
    cout << "b2: "; cin >> b2;
    cout << "c2: "; cin >> c2;

    x = (b2*c1 - b1*c2)/(a1*b2 - a2*b1);
    y = (a1*c2 - a2*c1)/(a1*b2 - a2*b1);
    cout << "x is equal to : " << x << endl;
    cout << "y is equal to : " << y << endl;
    
    return 0;
}
