#include <iostream>
#include <string>
using namespace std;


string Reverse(const std::string& input) {
    if (input == "true") {
        return "false";
    } else if (input == "false") {
        return "true";
    } else {
        return "Invalid input";
    }
}

int main() {
    string input;

    
   cout << "Enter 'true' or 'false': ";
   cin >> input;

   string result = Reverse(input);

  
    cout << result << std::endl;

    return 0;
}