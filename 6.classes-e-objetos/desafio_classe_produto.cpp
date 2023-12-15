#include <iostream>
#include <sstream>
using namespace std;


class Product{

    //atributos
    public:
    string name;
    double prince;
    double discount;

    //metodo
    double finalPrince(){
        return prince - (prince * discount);

    }


};

int main() {

    Product p1;
    p1.name = "Tenis";
    p1.prince = 100;
    p1.discount = 0.15;

    cout << p1.name << endl;
    cout << p1.prince << endl;
    cout << p1.discount << endl;
    cout << p1.finalPrince() << endl;

    
    return 0;
}