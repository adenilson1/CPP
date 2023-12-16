//construtores sao metodos espciais para criar objetos a parte de uma classe
#include <iostream>
using namespace std;

class Date{
    public:
    int day;
    int month;
    int year;

// criando um construtor, metedo sem retorno. construtor padrao, sem paramentros
Date(){
    day = 1;
    month = 1;
    year = 1970;
}


};

int main() {

    Date d1;
    /*d1.day = 1;
    d1.month = 1;*/
    d1.year = 2022;

    cout << d1.day << "/" << d1.month << "/" << d1.year;
  
    return 0;
}