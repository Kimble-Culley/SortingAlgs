#include <vector>
#include "selectionSortB.h"

void selectionSortB(std::vector<int> &randVector){
    int n = randVector.size();
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(randVector[j] < randVector[min]){
                min = j;
            }
        }
        int temp = randVector[i];
        randVector[i] = randVector[min];
        randVector[min] = temp;
    }
}