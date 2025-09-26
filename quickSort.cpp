#include <vector>
#include "quickSort.h"

void swap(int &a, int &b);
int partition(std::vector<int> &A, int p, int r);
void quickSortHelper(std::vector<int> &A, int p, int r);

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(std::vector<int> &A, int p, int r){
int x = A[r];
int i = p - 1;
for(int j = p; j <= r-1; j++){
    if(A[j] <= x){
        i++;
        swap(A[i],A[j]);
        }
    }
swap(A[i+1],A[r]);
return i+1;
}

void quickSortHelper(std::vector<int> &A, int p, int r){
    if(p < r){
        int q = partition(A,p,r);
        quickSortHelper(A,p,q-1);
        quickSortHelper(A,q+1,r);
    }
}

void quickSort(std::vector<int> &randVector){
    if(randVector.empty()){
        return;
    }
    quickSortHelper(randVector,0,randVector.size()-1);
}

