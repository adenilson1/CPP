#include<iostream>
using namespace std;


int main(){
    string names[] = {"Hanna",  "Peter",  "Mary",  "Mike",  "James"};

    for(int i = 0 ; i < 5; i++){
        cout << names[i] << " ";
    }

    cout << "\nforeach...#01\n"; // usando a copia

    for(string s: names){ // iterando 
        
        s.append("!!!"); //copia
        cout << s << " ";

    }
    cout << "\nforeach...#02\n"; // usando a referencia

    for(auto &s: names){ // iterando 
        
        s.append("!!!"); //referencia
        cout << s << " ";

    }

    cout << "\nforeach...#03 (Ref Constante)\n"; // usando a referencia sem modificação, constante

    for(auto const &s: names){ // iterando 
        
        //s.append("!!!!!!!!!!!!"); //referencia
        cout << s << " ";

    }
    cout << endl;
    cout << names[0] << endl;
    
    return 0;
}
