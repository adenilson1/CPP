#include<iostream>
using namespace std;

int main(){
    // type boolean
    bool isAdm = false; // false, true, 0 and 1
    cout << isAdm << endl;

    //type simples symbol
    char symbol = '#';
    char symbol1('@');
    cout << symbol << endl;
    cout << symbol1 << endl;

    // tipos inteiros
    // datatype modifiers
    // unsigned, signed, long and short
    unsigned short int age = 31;
    cout << age << endl;

    // tipos ponto flutuantes
    float pi = 3.14; // single precision floating point type
    const double  PI = 3.1415;
    cout << pi << endl;
    cout << PI << endl;

    // datatypes modifiers
    // signed unsigned long short
    short int n1 = 1;
    long int n2 = 1;
    unsigned int n3 = 1;
    long long int n4 = 1;
    cout << n1 + n2 + n3 + n4 << endl;

    //tamamho de variaveis
    cout << sizeof(char) << " byte" << endl;
    cout << sizeof(wchar_t) << " bytes" << endl;
    cout << sizeof(char16_t) << " bytes" << endl;
    cout << sizeof(char32_t) << " bytes" << endl;
    cout << sizeof(int) << " bytes" << endl;
    cout << sizeof(long int) << " bytes" << endl;
    cout << sizeof(long long int) << " bytes" << endl;
    cout << sizeof(float) << " bytes" << endl;
    cout << sizeof(double) << " bytes" << endl;

    return 0;
}
