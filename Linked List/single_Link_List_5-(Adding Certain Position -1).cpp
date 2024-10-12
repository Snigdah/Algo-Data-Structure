#include<bits/stdc++.h>
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
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    temp->data = x;
    temp->link = NULL;

    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    ptr = head;

    while(ptr->link!=NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
}

void add_at_pos(struct node *head, int data, int pos){

    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    struct node *ptr = head;
/*
    pos--;
    while(pos!=1){
        ptr= ptr->link;
        pos--;
    }
*/
    for(int i = 1 ; i<pos-1 ; i++){
       ptr = ptr->link;
    }

    temp->link = ptr->link;
    ptr->link = temp;

}
int main(){

   struct node *head = (struct node *) malloc(sizeof(struct node));
   head->data = 50;
   head->link = NULL;


   add_at_end(head, 100);
   add_at_end(head, 200);
   add_at_end(head, 300);
   add_at_end(head, 400);


   int data = 500, pos = 3;
   add_at_pos(head, data, pos);

   count_of_element(head);




    return 0;
}

