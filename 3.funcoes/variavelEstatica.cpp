#include <iostream>
using namespace std;



int nexId(){
    int static  id = 1;
    return id++;

}
int main() {
    cout << nexId() << endl;
    cout << nexId() << endl;
    cout << nexId() << endl;
    cout << nexId() << endl;
    
    
    return 0;
}