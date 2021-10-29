#include <iostream>
using namespace std;
int main(){
  char ch;
  cout << "Enter a letter: ";
  cin >> ch;
  if(ch >= 'a' && ch <= 'z'){
    cout << ch << " is lower case." << endl;
  }else if(ch >= 'A' && ch <= 'Z'){
    cout << ch << " is upper case." << endl;
  }

  return 0;
}
