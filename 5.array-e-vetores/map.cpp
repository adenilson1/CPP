#include <iostream>
#include<vector>
using namespace std;
using mapfn = int(*)(int);


//criando uma funcao map
vector<int> map(vector<int> v, mapfn fn){  // funcao que transforma cada elemento do vetor
    vector<int> newVector;
    for(auto el: v){
        newVector.push_back((*fn)(el));
    }

    return newVector;

}

int main() {

    //vetor 
    vector<int> nums = {2, 5, 8, 23, 56};
    
    //funcao quadrada
    auto square = [](int x) {return x * x;};

    //funcao tripla
    auto triple= [](int x) {return 3 * x;};



    //vector<int> squares;

//usando a funcao map
    vector<int> squares = map(nums, square);
    vector<int> triples = map(nums, triple);


// forma tradicional de mapeamento com laço for
    /*for(auto num : nums){

        squares.push_back(square(num));
    }*/

    for(auto n : nums) cout << n << "\t";
    cout << endl;
    for(auto sq : squares) cout << sq << "\t";
    cout << endl;
    for(auto t : triples) cout << t << "\t";

    return 0;
}