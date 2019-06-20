#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int integer; double doublenum; string newstring;
    // Read and save an integer, double, and String to your variables.
    cin >> integer >> doublenum;
    cin.ignore();
    getline(cin,newstring);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << i + integer << endl;
    // Print the sum of the double variables on a new line.
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    cout << d + doublenum << endl;
    // Concatenate and print the String variables on a new line
    cout << s + newstring << endl;
    // The 's' variable above should be printed first.

    return 0;
}
