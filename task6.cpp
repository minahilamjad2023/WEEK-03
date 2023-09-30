#include <iostream>
using namespace std;
void longestTime(int hours, int minutes);
main()
{
int hours;
int minutes;
  cout << "Enter the number of hours: ";
  cin >> hours;
  cout << "Enter the number of minutes: ";
  cin >> minutes ;
  longestTime(hours, minutes);
}
void longestTime(int hours, int minutes)
{
hours = hours*60;
if (hours > minutes)
{
cout << hours/60;
}
else 
{
cout << minutes ;
}
}

