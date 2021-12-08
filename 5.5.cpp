#include <iostream>
using namespace std;
int main ()
{
    int i, n, sum=0;
    cout << "Enter a number: "; cin >> n;
    for(i=1; i<=n; i++){
        sum = sum + i;
    }
    cout << "Summation for 1 to " << n << " is: " << sum <<endl;
    return 0;
}
