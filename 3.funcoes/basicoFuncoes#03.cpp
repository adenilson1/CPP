#include <iostream>
using namespace std;

int max(int n1, int n2, int n3);

int main() {
    int n1, n2, n3;
    cout << "Informe tres numeros inteiros: "<< endl;
    cin >> n1;
    cin >> n2;
    cin >> n3; 
   
   cout << "O maior numero eh: " << max(n1,max(n2,n3));
    
    return 0;
}

int max(int n1, int n2, int n3){
    
    return n1 >= n2 ? n1 : n2;

}