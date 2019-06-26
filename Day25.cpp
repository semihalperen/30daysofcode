#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, T; cin >> T;

    while(T--){
    cin >> N;
    
    if(N == 1){
        cout << "Not prime" << endl;
        continue;
    }

    bool isPrime = true;

    for(int i=2; i*i <= N && isPrime; i++){
        isPrime = N % i == 0 ? false : true;
    }

    cout << ((isPrime == true ) ? "Prime" : "Not prime") << endl;    
    }
    return 0;
}
