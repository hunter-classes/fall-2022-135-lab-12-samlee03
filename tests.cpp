#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

bool isMatching(std::vector<int> &v1, std::vector<int> &v2){
    if (v1.size() != v2.size()){
        return false;
    }
    for (int i = 0; i < v1.size(); i++){
        if (v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

TEST_CASE("Testing makeVector Function"){
    std::vector<int> v1 = makeVector(6);
    std::vector<int> v1_check{0, 1, 2, 3, 4, 5};
    CHECK(isMatching(v1, v1_check));

    std::vector<int> v2 = makeVector(2);
    std::vector<int> v2_check{0, 1};
    CHECK(isMatching(v2, v2_check));

    std::vector<int> v3 = makeVector(20);
    std::vector<int> v3_check{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    CHECK(isMatching(v3, v3_check));
}

TEST_CASE("Testing goodVibes Function"){
    std::vector<int> randVector1{-1, -2, -3, 1};
    std::vector<int> v1 = goodVibes(randVector1);
    std::vector<int> v1_check{1};
    CHECK(isMatching(v1, v1_check));

    std::vector<int> randVector2{2, 1, 7, -1, -2, 1, -3, 1};
    std::vector<int> v2 = goodVibes(randVector2);
    std::vector<int> v2_check{2, 1, 7, 1, 1};
    CHECK(isMatching(v2, v2_check));

    std::vector<int> randVector3{1, 2, 3, 4, -1, 2, 3, 4, 5, -1};
    std::vector<int> v3 = goodVibes(randVector3);
    std::vector<int> v3_check{1,2,3,4,2,3,4,5};
    CHECK(isMatching(v3, v3_check));
}

TEST_CASE("Testing gogeta Function"){
    std::vector<int> goku1{1, 2};
    std::vector<int> vegeta1{3, 4, 5};
    gogeta(goku1, vegeta1);
    std::vector<int> v1_check{1, 2, 3, 4, 5};
    CHECK(isMatching(goku1, v1_check));

    std::vector<int> goku2{1, 2, 3, 4, 5, 6};
    std::vector<int> vegeta2{1, 2, 3};
    gogeta(goku2, vegeta2);
    std::vector<int> v2_check{1,2,3,4,5,6,1,2,3};
    CHECK(isMatching(goku2, v2_check));

    std::vector<int> goku3{-1, 0, 1};
    std::vector<int> vegeta3{-2, 0, 2};
    gogeta(goku3, vegeta3);
    std::vector<int> v3_check{-1,0,1,-2,0,2};
    CHECK(isMatching(goku3, v3_check));
}

TEST_CASE("Testing sumPairWise"){
    std::vector<int> vector1{1, 2, 3, 4};
    std::vector<int> vector2{0, 2, 4, 6};
    std::vector<int> v1 = sumPairWise(vector1, vector2);
    std::vector<int> v1_check{1, 4, 7, 10};
    CHECK(isMatching(v1, v1_check));

    std::vector<int> vector3{-1, 2};
    std::vector<int> vector4{0, 1, 2, 3, 4};
    std::vector<int> v2 = sumPairWise(vector3, vector4);
    std::vector<int> v2_check{-1, 3, 2, 3, 4};
    CHECK(isMatching(v2, v2_check));

    std::vector<int> vector5{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> vector6{-1, -2, -3, -4, -5, -6};
    std::vector<int> v3 = sumPairWise(vector5, vector6);
    std::vector<int> v3_check{0, 0, 0, 0, 0, 0, 7, 8, 9};
    CHECK(isMatching(v3, v3_check));
}