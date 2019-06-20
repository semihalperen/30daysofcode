#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    while(N--){
        string str, emptyEven, emptyOdd;
        cin >> str;
        for(int i=0; i<str.length(); i++){
            i % 2 == 0 ? emptyEven += str[i] : emptyOdd += str[i]; 
        }
        cout << emptyEven << " " << emptyOdd << endl;   
    }
    return 0;
}
