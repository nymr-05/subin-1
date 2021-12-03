#include <iostream>
using namespace std;

int main(){
    int n, i;
    for (n=1; n<=20; n++){
            cout << "Multiplication Table for: " << n << endl;
        for (i = 1; i<=10; i++){
            cout << n << " X " << i << " = " << n* i << endl;
        }
        cout << "\n\n";
    }
    return 0;
