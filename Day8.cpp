int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N; cin >> N;
    map<string,int> phonebook;
    while(N--){
        string name; int number;
        cin >> name >> number;
        phonebook[name] = number;
    }
    string search;
    cin.ignore();
    while(getline(cin,search)){
        auto it = phonebook.find(search);
        it != phonebook.end() ? cout << it->first << "=" << it->second << endl : cout << "Not found" << endl;
    }  
    return 0;
}
