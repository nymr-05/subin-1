#include <iostream>
using namespace std;
    double add(double num1, double num2){
        double sum = num1 + num2;
        return sum;
    }

int main ()
{
    double a, b, sum;
    cout << "Enter two numbers: " << endl;
    cin >> a;
    cin >> b;
    sum = add(a, b);
    cout << sum;
    return 0;
}
