#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class Stack{
    struct node *top;

public:
    Stack(){
       top = NULL;
    }

    void push(int x){
        struct node *temp = (struct node*)malloc(sizeof(struct node*));
        temp->data = x;
        temp->next = top;

       top = temp;
    }

    void pop(){
        if(top==NULL){
            return;
        }

        struct node *temp = top;
        top = top->next;
        free(temp);
    }
    int TOP(){
        return top->data;
    }

};

int main() {

   Stack a;
   a.push(120);
   a.push(34);
   a.push(23354);
   a.push(34);
   a.pop();

   cout<<a.TOP()<<endl;

   return 0;
}
