#include <iostream>
using namespace std;


int g = 1;

void func3(){
    int g = 1;
    g  += 100;
    cout << "exec....#03.... " << g << endl;
}
void func2 (){
    g +=10;
    func3();

    {
        int a = 3;
        cout << a << endl;

    }

}

void func1(){
    g+=1;
    func2();
}

int main() {
    func1();

    cout << g << endl;
    return 0;
}


// stack


//  
//func3
//func2
//func1
//main

