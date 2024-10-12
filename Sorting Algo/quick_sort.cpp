#include <bits/stdc++.h>
using namespace std;

int Partition(int *A, int low, int high){

    int pivot = A[high];
    int partitionIndex = low;

    for(int i =low; i<high; i++){
         if(A[i]<=pivot){
            int temp = A[partitionIndex];
            A[partitionIndex] = A[i];
            A[i] = temp;
            partitionIndex++;
         }
    }

    int temp = A[high];
    A[high] = A[partitionIndex];
    A[partitionIndex] = temp;

    return partitionIndex;

}

void QuickSort(int *A, int low, int  high){

    if(low>=high){
        return;
    }

    int partitionIndex = Partition(A, low, high);

    QuickSort(A, low, partitionIndex-1);
    QuickSort(A, partitionIndex+1, high);

}

int main(){

    int A[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    QuickSort(A, 0, 8);

    for(int i =0; i<9; i++){
        cout<<A[i]<<endl;
    }

    return 0;
}
