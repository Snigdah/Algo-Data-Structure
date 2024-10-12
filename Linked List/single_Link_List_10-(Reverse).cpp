#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void add_at_end(struct node *head, int x){

    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;

    struct node *ptr = head;

    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    ptr->next = temp;
}

void print_all_node(struct node *head){

    struct node *ptr = head;
    while(ptr!= NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

void iterative_reverse(struct node **head){

      struct node *prev = NULL;
    struct node *next = NULL;
    struct node *current = *head;

    while(current!= NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;

}

struct node* recursive_reverse(struct node *head){

    if(head->next == NULL){
        return head;
    }

    struct node *ptr = recursive_reverse(head->next);
     head->next->next = head;
     head->next = NULL;

    return ptr;

};


int main()
{
   struct node *head = (struct node *) malloc(sizeof(struct node));
   head->data = 20;
   head->next = NULL;

   add_at_end(head, 30);
   add_at_end(head, 40);
   add_at_end(head, 50);
   add_at_end(head, 60);
   add_at_end(head, 70);

   print_all_node(head);

    iterative_reverse(&head);
    cout<<endl;
    print_all_node(head);

    head = recursive_reverse(head);
    cout<<endl;
    print_all_node(head);

    return 0;
}
