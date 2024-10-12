#include <bits/stdc++.h>
using namespace std;

void merge(int A[], int l, int mid, int r){
    int len1 = mid - l + 1;
    int len2 = r - mid;

    int L[len1];
    int R[len2];

    for(int i =0; i<len1; i++){
        L[i] = A[l+i];
    }

    for(int i =0; i<len2; i++){
        R[i] = A[mid+1+i];
    }

    int i=0, j=0, k=l;

    while(i<len1 && j<len2){
        if(L[i] <= R[j]){
            A[k]=L[i];
            i++;
        }
        else{
            A[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<len1){
        A[k] = L[i];
        i++;
        k++;
    }

    while(j<len2){
        A[k]=R[j];
        j++;
        k++;
    }
}

void mergeSort(int A[], int l, int r){
    if(l>=r){
        return;
    }

    int mid = l + (r-l)/2;
    mergeSort(A, l, mid);
    mergeSort(A, mid+1, r);
    merge(A, l, mid, r);

}
int main(){

    int A[] = {8, 7, 6, 5, 4, 3, 2, 1};

    int n = sizeof(A)/sizeof(A[0]);

    mergeSort(A, 0, n-1);

    for(int i =0; i<n; i++){
        cout<<A[i]<<endl;
    }

    return 0;
}
