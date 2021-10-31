#include <iostream>

using namespace std;

int total(int a, int b, int c, int d){
    int x = b * c;
    int y = b * 120 / d;
    int totalFare = a + x + y;

    return totalFare;
}

int main(){
    int choice, distance, perKm, baseFare, speed;
    cout << "Choose your transportation-\n1. Car\n2. Bike\n3. Bicycle" << endl;
    cout << "Your choice: ";
    cin >> choice;

    if(choice == 1){
        baseFare = 50;
        cout << "Your destination(distance): ";
        cin >> distance;
        perKm = 25;
        speed = 60;
        cout << total(baseFare, distance, perKm, speed);
    }else if(choice == 2){
        baseFare = 30;
        cout << "Your destination(distance): ";
        cin >> distance;
        perKm = 15;
        speed = 70;
        cout << total(baseFare, distance, perKm, speed);
    }else if(choice == 3){
        baseFare = 20;
        cout << "Your destination(distance): ";
        cin >> distance;
        perKm = 10;
        speed = 20;
        cout << total(baseFare, distance, perKm, speed);
    }else{
        cout << "Choose a valid optioin!";
    }


    return 0;
}
