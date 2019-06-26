#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int rem=0, count=0, max=0;

    while(n>0){
        n % 2 == 1 ? count++: count = 0;
        n /= 2;
        max > count ? max : max = count;
    }
    cout << max << endl;
    return 0;
}
