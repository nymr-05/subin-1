#include <iostream>
using namespace std;
int main ()
{
    int n, i, sum=0;
    cout << "Enter a number: "; cin >> n;
    for(i=1; i<=n; i++){
        if(i%2==0){
            continue;
        }
        sum = sum + i;
    }
    cout << "Summation of odd numbers upto "<<n<<" is: "<<sum<<endl;

    return 0;
}
