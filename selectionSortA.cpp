#include <vector>
#include "selectionSortA.h"

void selectionSortA(std::vector<int> &randVector){
int n = randVector.size();

    for(int i = 0; i < n ; i++){
        for(int j = i+1; j < n; j++){
            if(randVector[j] < randVector[i]){
                int temp = randVector[i];
                randVector[i] = randVector[j];
                randVector[j] = temp;
            }
        }
    }
}