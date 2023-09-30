#include <iostream>
#include <windows.h> 
using namespace std; 


void gotoXY(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void pet(int holidays) {
    const int norm = 30000;  
    const int totalDaysInYear = 365;
    const int minutesPerWorkingDay = 63;
    const int minutesPerHoliday = 127;

    int workingDays = totalDaysInYear - holidays;
    int timeForGames = (workingDays * minutesPerWorkingDay) + (holidays * minutesPerHoliday);
    int difference = norm - timeForGames;

    if (difference >= 0) {
       cout << "Tom sleeps well" << endl;
       cout << difference / 60 << " hours and " << difference % 60 << " minutes less for play" <<endl;
    } else {
        cout << "Tom will run away" << endl;
        difference = -difference;
        cout << difference / 60 << " hours and " << difference % 60 << " minutes for play" << endl;
    }
}

int main() {
    int holidays;

    
   cout << "Holidays: ";
    cin >> holidays;

   
    pet(holidays);

    return 0;
}