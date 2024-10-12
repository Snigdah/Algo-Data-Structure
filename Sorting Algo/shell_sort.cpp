#include <bits/stdc++.h>
using namespace std;

void ShellSort(int *A, int n){

    for(int i = n/2; i>0; i = i/2){
        for(int j = i; j < n; j++){
            for(int k = j-i; k>=0; k = k-i){
                if(A[k+i] >= A[k]){
                    break;
                }
                else{
                    int temp = A[k];
                    A[k] = A[k+i];
                    A[k+i] = temp;
                }
            }
        }
    }

}



int main(){

    int A[] = {14,18,19,37,23,40,29,30,11};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<n<<endl;
    ShellSort(A, n);

    for(int i =0; i<9; i++){
        cout<<A[i]<<endl;
    }

    return 0;
}
