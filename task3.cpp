#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


double CalculateDiscountedPrice(const std::string& country, double ticketPrice) {
    double discount = 0.0;

   
    if (country == "Pakistan") {
        discount = 0.05;
    } else if (country == "Ireland") {
        discount = 0.10;
    } else if (country == "India") {
        discount = 0.20;
    } else if (country == "England") {
        discount = 0.30;
    } else if (country == "Canada") {
        discount = 0.45;
    } else {
       cout << "Invalid country name!" << endl;
        return ticketPrice;
    }

   
    double discountedPrice = ticketPrice * (1.0 - discount);
    return discountedPrice;
}

int main() {
    string country;
    double ticketPrice;

    cout << "Enter the country's name: ";
    cin >> country;

   cout << "Enter the ticket price in dollars: $";
   cin >> ticketPrice;

    
    double finalPrice = CalculateDiscountedPrice(country, ticketPrice);

    cout << "Final ticket price after discount: $" << fixed << std::setprecision(2) << finalPrice <<endl;

    return 0;
}