#include <iostream>
using namespace std;

string tpChecker(int people, int tp) {
    
    int sheetsPerRoll = 500;
    int sheetsPerPersonPerDay = 57;

    int totalSheets = tp * sheetsPerRoll;
    int sheetsNeededPerDay = people * sheetsPerPersonPerDay;
    int daysLasting = totalSheets / sheetsNeededPerDay;

    if (daysLasting <= 0) {
        return "Your TP is already out, buy more!";
    } else if (daysLasting <= 5) {
        return "Your TP will only last " + std::to_string(daysLasting) + " days, buy more!";
    } else {
        return "Your TP will last " + std::to_string(daysLasting) + " days, no need to panic!";
    }
}

int main() {
    int people, rolls;

   cout << "Number of people in the household: ";
   cin >> people;

   cout << "Number of rolls of TP: ";
   cin >> rolls;

    
   string result = tpChecker(people, rolls);
    cout << result << endl;

    return 0;
}