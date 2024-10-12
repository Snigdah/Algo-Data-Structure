#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class Queue{
    struct node *front , *rear;

public:
    Queue(){
        front = rear = NULL;
    }

    void Enqueue(int x){
        struct node *temp = (struct node*)malloc(sizeof(struct node*));
        temp->data = x;
        temp->next = NULL;

        if(front==NULL && rear==NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void Dequeue(){
        struct node *temp = front;
        if(front==NULL){
            return;
        }
        if(front == rear){
            front = rear = NULL;
        }
        else{
            front = front->next;
        }
        free(temp);
    }
    int Front(){
        return front->data;
    }
    int Rear(){
        return rear->data;
    }
};

int main() {

    Queue a;
    a.Enqueue(5);
    a.Enqueue(10);
    a.Enqueue(27);
    //a.Dequeue();

    cout<<a.Front()<<endl;
    cout<<a.Rear()<<endl;

   return 0;
}
