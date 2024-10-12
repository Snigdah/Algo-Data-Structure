#include <bits/stdc++.h>
using namespace std;

void max_heapify(int *a, int n, int i){

    int l = 2*i +1;
    int r = 2*i +2;

    int largestIndex = i;

    if(l<n && a[l]>a[i]){
        largestIndex = l;
    }

    if(r<n && a[r]>a[largestIndex]){
        largestIndex = r;
    }

    if(i!=largestIndex){
        int temp = a[i];
        a[i] = a[largestIndex];
        a[largestIndex] = temp;

        max_heapify(a, n, largestIndex);
    }
}

void buildHeap(int *a, int n){
    int startIndex = (n/2) - 1;

    for(int i = startIndex; i>=0; i--){
        max_heapify(a, n, i);
    }
}

void heapSort(int *a, int n){
    //before heapSort must need to buildHeap
    buildHeap(a, n);

    for(int i = n-1; i>=0; i--){
        int temp = a[i];
        a[i] = a[0];
        a[0] = temp;

        max_heapify(a, i, 0);
    }
}


int main(){

    int a[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int n = sizeof(a)/sizeof(a[0]);

    heapSort(a, n);

    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }

    return 0;
}
