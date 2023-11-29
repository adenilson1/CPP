#include <iostream>
using namespace std;

// Function prototype
void log(int number = 0, bool newLine = true);

int main() {
    
    //declaradas o bool
    log(3 , 0); 
    log(4 , 0);
    log(5 , 1);
    log(6 , 1);

    cout << "..............." << endl;
    
    // nao declaradas o bool
    log(7);
    log(8);
    log(9);

    cout << "..............." << endl;

    // sem declarar o int e o bool
    log();

    return 0;
}

void log(int number, bool newLine){

    cout << "Number: " << number;
    newLine ? cout << endl : cout << " ";

}