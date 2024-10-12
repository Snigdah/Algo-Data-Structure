#include <bits/stdc++.h>
using namespace std;


void max_heapify(int *arr, int n, int i){

     int l = 2*i + 1;
     int r = 2*i + 2;

     int largest = i;

     if(l<n && arr[l]>arr[i]){
        largest = l;
     }

     if(r<n && arr[r]>arr[largest]){
        largest = r;
     }

     if(largest != i){
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        max_heapify(arr, n, largest);
     }



}

void buildHeap(int *arr, int n){

    int startIndex = (n/2)-1;

    for(int i = startIndex; i>=0; i--){
        max_heapify(arr, n, i);
    }

}

void heapify(int *arr, int n, int i){

    int parent = (i-1)/2;

    if(arr[parent]>0){
        if(arr[i] > arr[parent]){
            int temp = arr[i];
            arr[i] = arr[parent];
            arr[parent] = temp;

            heapify(arr, n, parent);
        }
    }
}

void insertNode(int *arr, int &n, int value){

    n = n+1;
    arr[n-1] = value;
    heapify(arr, n, n-1);
}

void deleteRoot(int *arr, int &n){

    int lastElement = arr[n-1];
    arr[0] = lastElement;
    n = n-1;

    max_heapify(arr, n, 0);

}
int main()
{
    // Binary Tree Representation
    // of input array
    //             1
    //           /    \
    //         3        5
    //       /  \     /  \
    //     4      6  13  10
    //    / \    / \
    //   9   8  15 17

    int a[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int N = sizeof(a)/sizeof(a[0]);

    buildHeap(a, N);

    //print
    for(int i = 0; i<N;  i++){
        cout<<a[i]<<endl;
    }
    // Final Heap:
    //              17
    //            /    \
    //          15      13
    //         /  \     / \
    //        9     6  5   10
    //       / \   / \
    //      4   8 3   1

    int value = 14;
    insertNode(a, N, value);


    //print
    for(int i = 0; i<N;  i++){
        cout<<a[i]<<endl;
    }

    // Final Heap:
    //               17
    //            /      \
    //          15        14
    //         /  \       / \
    //        9     6    13  10
    //       / \   / \   /
    //      4   8 3   1  5

     deleteRoot(a, N);
     //print
    for(int i = 0; i<N;  i++){
        cout<<a[i]<<endl;
    }

    return 0;
}
