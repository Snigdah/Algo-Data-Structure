#include <bits/stdc++.h>
using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

void add_at_end(struct node *head, int x){

    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = x;
    temp->next = NULL;

    struct node *ptr = head;

    while(ptr->next != NULL){
       ptr = ptr->next;
    }

    ptr->next = temp;
    temp->prev = ptr;
}

void  add_at_front(struct node **head, int x){

    struct node *temp =(struct node *) malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = x;
    temp->next = *head;
    (*head)->prev = temp;
    *head = temp;
}

void print_all(struct node *head){

    struct node *ptr = head;
    while(ptr!= NULL){
        cout<<ptr->data<<endl;
        ptr =  ptr->next;
    }
}

void insert_between_nodes(struct node *head, int pos , int data){

    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    struct node *ptr = head;
    int n = 2;

    while(n<pos){
        ptr = ptr->next;
        n++;
        //cout<<"data   "<<ptr->data<<endl;
    }

    temp->next = ptr->next;
    temp->next->prev = temp;
    ptr->next = temp;
    temp->prev = ptr;



}

void del_first_node(struct node **head){

    *head = (*head)->next;
    free((*head)->prev);
    (*head)->prev = NULL;

}

void del_last_node(struct node *head){

    struct node *ptr = head;
    while(ptr->next->next != NULL){
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
}

struct node* reverse_all_node(struct node *head){

    struct node *ptr1 = head;
    struct node *ptr2 = ptr1->next;

    ptr1->next = NULL;
    ptr1->prev = ptr2;

    while(ptr2 != NULL){
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }

    head = ptr1;
    cout<<head->data<<endl;

    return head;
};

int main(){

    struct node *head = (struct node *) malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 20;
    head->next = NULL;

    add_at_end(head, 30);
    add_at_end(head, 40);

    add_at_front(&head, -10);
    add_at_front(&head, -20);

    insert_between_nodes(head, 3, 100);

    print_all(head);
    cout<<endl;

    del_first_node(&head);
    print_all(head);
    cout<<endl;

    del_last_node(head);
    print_all(head);
    cout<<endl;


    head = reverse_all_node(head);
    print_all(head);
    cout<<endl;

}
