#include <iostream> // procura na biblioteca
#include "includes/include_2.h" // procura na pasta local
using namespace std;

int main(){

    cout << "#includes v2" << endl;
    cout << add(7, 8) << endl;

    return 0;
}

int add (int x, int y ){

    return x + y;
}

