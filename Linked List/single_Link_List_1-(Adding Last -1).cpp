#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *link;
};

void count_of_element(struct node *head){

    if(head==NULL){
        cout<<"No element"<<endl;
    }

    struct node *ptr = NULL;
    ptr = head;

    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}

void add_at_end(struct node *head, int x){

    struct node *ptr;
    ptr = head;

    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = x;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
}
class Node{
public:
    int val;
    Node *next;


};

int main(){

    Node *p = new Node();
    p->val = 12;
    p->next = NULL;

    cout<<p->val<<endl;


    struct node *head = (struct node *) malloc(sizeof(struct node));
    head->data = 34;
    head->link = NULL;

    struct node *curent = (struct node *) malloc(sizeof(struct node));
    curent->data = 50;
    curent->link = NULL;
    head->link = curent;

    curent = (struct node *) malloc(sizeof(struct node));
    curent->data = 100;
    curent->link = NULL;
    head->link->link = curent;

    add_at_end(head, 200);
    count_of_element(head);

    cout<<head->link->link<<endl;

    return 0;
}
