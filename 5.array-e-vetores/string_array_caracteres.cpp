#include <iostream>
using namespace std;

int main() {
    string abc = "abcdefghijklmnopqrtuvwxy";

    abc[9] = '?';

    cout << abc[9] << endl;

    for(char l : abc){
        cout << l << ",";
    }
    return 0;
}