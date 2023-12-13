#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>nums;
    nums.assign(10,1);

    nums[0] = 7;
    nums[9] = 7;
    nums[3] = 8;
    nums[5] = 8;

    nums.erase(nums.begin() + 4); // elimina um elemento do vetor em um determinada posicao, nesse caso no vetor[4]
    cout << nums.size() << endl;
    
    for(auto n : nums){
        cout << n << " ";
    }

    nums.clear(); // elemina todos o elementos de um vetor
    cout <<  "\n" << nums.size();



    return 0;
}