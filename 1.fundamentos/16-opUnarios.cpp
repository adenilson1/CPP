#include <cstdio>
using namespace std;

int main() {
    int x = 2;
    int y = 1;

    x++; // pre fixada
    ++y; //pos fixada 
    printf("%d %d \n",x,y);

    --x; // pre fixada
    y--; //pos fixada 
    printf("%d %d\n",x,y);

    // x =2 e y =1
    printf("%d\n",x-- == ++y); // forma de dificil interpretação. evita isso. 
    // x = 1 y =2

    return 0;
}