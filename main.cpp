#include <iostream>
#include "funcs.h"
#include <vector>

int main(){
    std::cout << "Task A: makeVector(int n)\n";
    std::vector<int> myVector = makeVector(5);
    for (int i = 0; i < 5; i++){
        std::cout << myVector[i] << std::endl;
    } 
    // std::cout << myVector.capacity() << " " << myVector.size();
    std::cout << "\nTask B: goodVibes(const vector<int> &v)\n";
    std::vector<int> numberVector{-1, 5, 2, -2, -100, 5, 2, -2};
    std::vector<int> positiveVector = goodVibes(numberVector);
    for (int i = 0; i < positiveVector.size(); i++){
        std::cout << positiveVector[i] << std::endl;
    }
    std::cout << "\nTask C: gogeta(vector<int> &goku, vector<int> &vegeta)\n";
    std::vector<int> gokuVector{0, 1, 2, 3, 4};
    std::vector<int> vegetaVector{5, 6, 7, 8};
    gogeta(gokuVector, vegetaVector);
    for (int i = 0; i < gokuVector.size(); i++){
        std::cout << gokuVector[i] << std::endl;
    }

    std::cout << "\nTask D: sumPairWise(const vector<int> &v1, const vector<int> &v2)\n";
    std::vector<int> v1{0, 2, 4, 6, 8};
    std::vector<int> v2{2, 2, 2, 2};
    std::vector sumVector = sumPairWise(v1, v2);
    for (int i = 0; i < sumVector.size(); i++){
        std::cout << sumVector[i] << std::endl;
    }
    return 0;
}