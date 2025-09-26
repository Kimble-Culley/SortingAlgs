#include <iostream>
#include <vector>
#include <random>
#include "selectionSortA.h"
#include "selectionSortB.h"
#include "mergeSort.h"
#include "quickSort.h"

void generateRandom(std::vector<int> &randVector);
void printVector(std::vector<int> sVector);
void copyVector(std::vector<int> &oVector, std::vector<int> cVector);

int main(){
    srand(time(0));
    std::vector<int> randVector;
    std::vector<int> crandVector(100);


    generateRandom(randVector);

    copyVector(crandVector,randVector);
    printVector(randVector);


    selectionSortA(randVector);
    printVector(randVector);

    copyVector(randVector,crandVector);

    selectionSortB(randVector);
    printVector(randVector);

    copyVector(randVector,crandVector);

    mergesort(randVector);
    printVector(randVector);

    return 0;
}


void generateRandom(std::vector<int> &randVector){

    for(int i = 0; i < 100; i++){
        randVector.push_back(rand() % 100);
    }
}

void printVector(std::vector<int> sVector){
    for(int i = 0; i < 100; i++){
        std::cout << sVector[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
}

void copyVector(std::vector<int> &oVector, std::vector<int> cVector){
    int n = oVector.size();

    for(int i = 0; i < n; i++){
        oVector[i] = cVector[i];
    }
}