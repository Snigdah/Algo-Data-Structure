#include <bits/stdc++.h>
using namespace std;


#define MAX_SIZE 101

int A[MAX_SIZE];
int front = -1, rear = -1;

bool isEmpty(){

    if(front == -1 && rear == -1){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){

    if( (rear+1)%MAX_SIZE == front){
        return true;
    }
    else{
        return false;
    }
}

void Enqueue(int x){

    if(front == -1 && rear == -1){
        front = rear = 0;
    }
    else if( isFull()){

        cout<<"Full"<<endl;
        return;
    }
    else{
        rear = (rear+1)%MAX_SIZE;
    }

    A[rear] = x;

}

void Dequeue(){

    if(isEmpty()){
        cout<<"Error: Queue is Empty\n";
			return;
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        front = (front+1)%MAX_SIZE;
    }
}

int Front(){
		if(front == -1)
		{
			cout<<"Error: cannot return front from empty queue\n";
			return -1;
		}
		return A[front];
}


int main()
{

    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    Enqueue(60);
    Dequeue();
    Dequeue();

   // cout<<Front()<<endl;

    for(int i = front; i<=rear; i++){
        cout<<A[i]<<endl;
    }


	return 0;
}


