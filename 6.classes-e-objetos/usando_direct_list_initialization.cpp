#include <iostream>
using namespace std;


class Product{

    public:
    string name;
    double prince;
    double discount;

    double finalPrince(){
        return prince * (1 - discount);
    }
};

int main() {

    Product p1;
    p1.name = "Carro";
    p1.prince = 50000.99;
    p1.discount = 0.15;

    cout << p1.name << endl;
    cout << p1.prince << endl;
    cout << p1.discount << endl;
    cout << p1.finalPrince() << endl;

    cout << endl;
    
    // direct list initialization
    Product p2 {"iPad", 899.99, 0.1};
    cout << p2.name << endl;
    cout << p2.prince << endl;
    cout << p2.discount << endl;
    cout << p2.finalPrince() << endl;

    
    return 0;
}