#include<iostream>
using namespace std;

// lambda são funcoes anonimas, sem nome

auto add = [](int x, int y) -> int { return  x + y; };
auto sub = [](int x, int y) -> int { return  x - y; };

int main(){

    cout << add(10,20) << endl;
    cout << sub(20,26) << endl;
    return 0;
}