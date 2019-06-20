#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    (N % 2 == 1 || (N <= 20 && N >= 6&&N % 2 == 0)) ? cout << "Weird\n": cout <<"Not Weird\n";
    return 0;
}
