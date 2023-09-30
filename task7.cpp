#include <iostream>
using namespace std;


double flowerShop(int redRose, int whiteRose, int tulip) {
    const double redRosePrice = 2.00;
    const double whiteRosePrice = 4.10;
    const double tulipPrice = 2.50;

    double totalPrice = (redRose * redRosePrice) + (whiteRose * whiteRosePrice) + (tulip * tulipPrice);

    return totalPrice;
}

int main() {
    int redRose, whiteRose, tulip;

   
    cout << "Red Rose: ";
    cin >> redRose;

    cout << "White Rose: ";
    cin >> whiteRose;

    cout << "Tulips: ";
    cin >> tulip;

    
    double totalPrice = flowerShop(redRose, whiteRose, tulip);


    if (totalPrice > 200) {
        double discount = 0.20 * totalPrice;
        double discountedPrice = totalPrice - discount;

        cout << "Original Price: $" << totalPrice << endl;
       
        cout << "Price after Discount: $" << discountedPrice << endl;
    } else {
        cout << "Original Price: $" << totalPrice << endl;
        cout << "No discount applied." << endl;
    }

    return 0;
}