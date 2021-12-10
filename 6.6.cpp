#include <iostream>
using namespace std;
int main ()
{
    int term1[10], term2[10], finals[10], total[10];
    for(int i=0; i<10; i++){
        cout << "Roll: "<<i+1 << endl;
        cout << "First term score: "; cin >> term1[i];
        cout << "Second term score: "; cin >> term2[i];
        cout << "Finals score: "; cin >> finals[i];
        total[i] = term1[i]/4 + term2[i]/4 + finals[i];
    }
    for(int j=0; j<10; j++){
        cout << "Roll: "<<j+1<<" total marks: " <<total[j]<< endl;
    }

    return 0;
}
