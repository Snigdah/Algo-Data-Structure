#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void push(int x){
    if(top==MAX_SIZE-1){
        cout<<"OVER Flow"<<endl;
    }
    else{
        top++;
        A[top] = x;
        //A[++top] = x
    }
}

void pop(){
    if(top==-1){
        cout<<"no element to pop"<<endl;
        return;
    }
    top--;
}

int Top(){
    return A[top];
}

int main() {

    push(2);
    push(5);
    pop();

    cout<<Top()<<endl;


    return 0;
}

