#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int main(){
    int N;
    cin >> N;
    regex email(".+@gmail\\.com$");
    
    vector<string> db;

    for(int a0 = 0; a0 < N; a0++)    {
        string firstName;
        string emailID;
        cin >> firstName >> emailID;

        if(regex_match(emailID,email)){
            db.push_back(firstName);
        }
    }

    sort(db.begin(), db.end());
    for(auto& it : db){
        cout << it << endl;
    }
}
