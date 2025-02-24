#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int x ){

    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = x;
    temp->link = NULL;

    struct node *ptr = head;

    while(ptr->link!=NULL){
        ptr = ptr->link;
    }

    ptr->link = temp;
}

void print_all_node(struct node *head){

    struct node *ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
}

struct node* del_first(struct node * head){

    if(head == NULL){
        cout<<"List is already empty"<<endl;
    }
    else{
        struct node *ptr = head;
        head = head->link;
        free(ptr);
        ptr = NULL;
    }

    return head;
}

int main(){

    struct node *head = (struct node *) malloc(sizeof(struct node));
    head->data = 50;
    head->link = NULL;

    add_at_end(head, 100);
    add_at_end(head, 200);
    add_at_end(head, 300);
    add_at_end(head, 400);

    head = del_first(head);

    print_all_node(head);



    return 0;
}

