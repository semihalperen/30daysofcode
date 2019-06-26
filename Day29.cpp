#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;

    while(T--){
        int N,k; cin >> N >> k;
        cout << ((k-1 | k) <= N ? k-1 : k-2) << endl; 
    }
    return 0;
}
