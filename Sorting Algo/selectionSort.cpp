#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *a, int n){

    for(int i =0; i<n-1; i++){
        int minIndex = i;

        for(int j = i+1; j<n; j++){
            if(a[j]<a[minIndex]){
                minIndex = j;
            }
        }

        if(i!=minIndex){
            int temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }

}




int main()
{
    int a[] = {44, 1, 45, 676, 4, 657, 8, 2, 76};
    int n = sizeof(a)/sizeof(a[0]);


    selectionSort(a, n);

    for(int i = 0; i<n; i++){
        cout<<a[i]<<endl;
    }

    return 0;
}
