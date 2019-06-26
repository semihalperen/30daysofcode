#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int firstDay, firstMonth, firstYear, dueDay, dueMonth, dueYear;
    cin >> firstDay >> firstMonth >> firstYear >> dueDay >> dueMonth >> dueYear;

//if returned early
if(dueYear > firstYear || (dueYear > firstYear && dueMonth > firstMonth)){
    cout << "0";
    return 0;
}

//if returned late
cout << (firstYear <= dueYear ?(firstMonth <= dueMonth ? (firstDay <= dueDay ? 0 : 15 * (firstDay-dueDay)): 500*(firstMonth-dueMonth)):10000);
    return 0;
}
