#include <iostream>
using namespace std;
int findMax (int ara[], int n);

int main ()
{
    int ara[10], n;
    cout << "Enter the numbers: " << endl;
    for(int j=0; j<10; j++){
        cin>>ara[j];
    }
    n = 10;
    int max = findMax(ara, n);
    cout << "The maximum of the following numbers: " << max;
    return 0;
}

int findMax(int ara[], int n){
    int maximum = ara[0];
    for(int i=0; i<n; i++){
        if(ara[i]>maximum){
            maximum = ara[i];
        }
    }
    return maximum;
}
