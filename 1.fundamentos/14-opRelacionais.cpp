#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int x;
    cout << "Entre com um numero: ";
    cin >> x;

    printf("%d > 10 -> %d\n", x, x > 10);
    printf("%d >= 10 -> %d\n", x, x >= 10);
    
    printf("%d < 10 -> %d\n", x, x < 10);
    printf("%d <= 10 -> %d\n", x, x <= 10);
   
    printf("%d == 10 -> %d\n", x, x == 10);
    printf("%d != 10 -> %d\n", x, x != 10);
    
    return 0;
}