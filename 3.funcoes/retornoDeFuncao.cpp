#include <iostream>
using namespace std;

bool log(string texto){
    if(texto.empty()) return false;
    if(texto == "Hi") return false;

    cout << "Texto; " << texto << endl;

    return true;
}

int main() {
    
    log("");
    log("Hi");
    log("ok");

    return 0;
}