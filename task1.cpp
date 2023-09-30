#include <iostream>
using namespace std;


bool IsEqual(int num1, int num2) {
    return num1 == num2;
}

int main() {
    int num1, num2;

    
    cout << "Enter the first number: ";
   cin >> num1;

   cout << "Enter the second number: ";
    cin >> num2;

    bool result = IsEqual(num1, num2);

    if (result) {
       cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}