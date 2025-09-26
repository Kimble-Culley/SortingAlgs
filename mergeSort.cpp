#include <vector>
#include <cmath>
#include "mergeSort.h"

void mergesorthelper(std::vector<int> &A, int p, int r);
void merge(std::vector<int> &A, int p, int q, int r);

void mergesort(std::vector<int> &randVector){
if (!randVector.empty()){
    mergesorthelper(randVector,0,randVector.size()-1);
}
else{
    return;
}

}


void mergesorthelper(std::vector<int> &A, int p, int r){
    if(p >= r){
        return;
    }
    int q = floor((p+r)/2);
    mergesorthelper(A,p,q);
    mergesorthelper(A,q+1,r);
    merge(A,p,q,r);
}

void merge(std::vector<int> &A, int p, int q, int r){

    int nL = q - p + 1;
    int nR = r - q;

    std::vector<int> L(nL);
    std::vector<int> R(nR);

    for(int i = 0; i < nL; i++){
        L[i] = A[p+i];
    }
    for(int j = 0; j < nR; j++){
        R[j] = A[q + j + 1];
    }

    int i = 0, j = 0, k = p;

    while((i < nL) && (j < nR)){
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < nL){
        A[k] = L[i];
        i++;
        k++;
    }
    while(k < nR){
        j++;
        k++;
    }
}
