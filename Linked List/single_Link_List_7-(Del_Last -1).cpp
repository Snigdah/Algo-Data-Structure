#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int x){

    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = x;
    temp->link = NULL;

    struct node *ptr = head;

    while(ptr->link != NULL){
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

void del_last(struct node *head){

    if(head==NULL){
        cout<<"No node"<<endl;
    }
    else if(head->link == NULL){
        free(head);
        head = NULL;
    }
    else{
        struct node *temp = head;
        struct node *temp2 = head;

        while(temp2->link!=NULL){
            temp = temp2;
            temp2 = temp2->link;
        }
        temp->link = NULL;
        free(temp2);
        temp2 = NULL;
    }
}

void del_last1(struct node *head){

    if(head==NULL){
        cout<<"No node"<<endl;
    }
    else if(head->link == NULL){
        free(head);
        head = NULL;
    }
    else{
        struct node *temp = head;

        while(temp->link->link!=NULL){
            temp = temp->link;
        }
        free(temp->link);
        temp->link = NULL;
    }
}
int main(){

    struct node *head = (struct node *) malloc(sizeof(struct node));
    head->data = 50;
    head->link = NULL;

    add_at_end(head, 100);
    add_at_end(head, 200);
    add_at_end(head, 300);
    add_at_end(head, 400);

    del_last(head);  //using two pointer
    del_last1(head); //using one pointer

    print_all_node(head);

    return 0;
}
