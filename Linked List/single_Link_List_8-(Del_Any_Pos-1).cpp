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

void del_at_pos(struct node **head, int pos){

    struct node *current = *head;
    struct node *previous = *head;

    if(*head==NULL){
        cout<<"node is empty"<<endl;
    }
    else if(pos == 1){
        *head = current->link;
        free(current);
        current = NULL;
    }
    else{

        for(int i= 1; i<pos ; i++){
            previous = current;
            current = current->link;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
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

    del_at_pos(&head, 3);

    print_all_node(head);



    return 0;
}

