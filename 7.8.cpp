#include <iostream>
using namespace std;


int main ()
{
    double area, r, pi=3.1416;
    cout << "Enter the radius of the circle: "; cin >> r;
    area = pi*r*r;
    cout << "Area of the circle is: "<<area;

    return 0;
}
