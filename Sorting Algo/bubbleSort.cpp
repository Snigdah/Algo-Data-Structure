#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *a, int n){

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

}




int main()
{
    int a[] = {44, 1, 45, 676, 4, 657, 8, 2, 76};
    int n = sizeof(a)/sizeof(a[0]);


    bubbleSort(a, n);

    for(int i = 0; i<n; i++){
        cout<<a[i]<<endl;
    }

    return 0;
}
