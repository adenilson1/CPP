#include <iostream>
using namespace std;

int main() {
    // binary end infix
    cout << 2 + 2 << endl;
    cout << 2 - 2 << endl;
    cout << 2 * 2 << endl;
    cout << 2 / 2 << endl;
    cout << 2 % 2 << endl;
    cout << 10 % 3 << endl;
    cout << 10 + 3 * 7 << endl;
    cout << (10 + 3) * 7 << endl;

    int x;
    int y;

    cout << "digite os valores de 'x' e 'y' " << endl;

    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    cout << "operacoes (+, -, *, /, %)" << endl;
    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl;
    cout << x % y << endl;

return 0;
}