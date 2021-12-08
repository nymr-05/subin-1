#include <iostream>
using namespace std;
int main ()
{
    double loanAmount, interestRate, lifeTime, payable, monthlyPayable;
    cout << "Loan Amount: "; cin >> loanAmount;
    cout << "Rate of interest: "; cin >> interestRate;
    cout << "Number of years: "; cin >> lifeTime;
    payable = loanAmount + loanAmount * interestRate / 100;
    monthlyPayable = payable / (lifeTime*12);
    cout << "Total Payable: " << payable << endl;
    cout << "Monthly Payable: " << monthlyPayable << endl;

    return 0;
}
