#include <iostream>
using namespace std;


bool possibleBonus(int a, int b) {
   
    int diff = b - a;

    
    return diff >= 1 && diff <= 6;
}

int main() {
    int yourPosition, friendPosition;

    
    cout << "Enter your position: ";
    cin >> yourPosition;

    cout << "Enter your friend's position: ";
    cin >> friendPosition;

    
    bool result = possibleBonus(yourPosition, friendPosition);

   
    if (result) {
        cout << "true" <<endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}




