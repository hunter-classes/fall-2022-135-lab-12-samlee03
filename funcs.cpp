#include <iostream>
#include <vector>

std::vector<int> makeVector(int n){
    std::vector<int> nums;
    if (n > 0){
        // std::cout << nums.capacity() << std::endl;
        for (int i = 0; i < n; i++){
            nums.push_back(i);
        }
    }
    return nums;
}

std::vector<int> goodVibes(const std::vector<int>& v){
    std::vector<int> positiveVector;
    for (int i = 0; i < v.size(); i++){
        if (v[i] > 0){
            positiveVector.push_back(v[i]);
        }
    }
    return positiveVector;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
    for (int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
    std::vector<int> smaller_vector;
    std::vector<int> bigger_vector;
    std::vector<int> combined_vector;
    if (v1.size() <= v2.size()){
        smaller_vector = v1;
        bigger_vector = v2;
    } else {
        smaller_vector = v2;
        bigger_vector = v1;
    }
    for (int i = 0; i < smaller_vector.size(); i++){
        int sum = smaller_vector[i] + bigger_vector[i];
        combined_vector.push_back(sum);
    }
    int numExtra = bigger_vector.size() - smaller_vector.size();
    if (numExtra > 0){
        for (int i = smaller_vector.size(); i < bigger_vector.size(); i++){
            combined_vector.push_back(bigger_vector[i]);
        }
    }
    return combined_vector;
}