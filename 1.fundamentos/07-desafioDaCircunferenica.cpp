#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    cout << "Entre com o valor do raio da circufenrancia: \n";

    //entrdada do valor do raio
    const double PI = 3.1415;
    double raio;
    cin >> raio;

    // calculo da area
    double area = PI * raio * raio;

    //saida do valor da area
    printf("O valor da area do raio %.4f unid. = %.4f unid. ao quadrado\n", raio, area);
    return 0;
}