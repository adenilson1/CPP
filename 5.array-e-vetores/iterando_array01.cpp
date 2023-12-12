#include<iostream>
using namespace std;


int main(){
    string names[] = {"Hanna",  "Peter",  "Mary",  "Mike",  "James"};

    for(int i = 0 ; i < 5; i++){
        cout << names[i] << " ";
    }

    cout << "\nforeach...\n";

    for(string s: names){ // iterando 
        
        cout << s << " ";

    }
    
    return 0;
}
