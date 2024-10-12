#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *link;
};

void add_beg(struct node **head, int x){

    struct node *temp =(struct node *) malloc(sizeof(struct node));
    temp->data = x;
    temp->link = *head;

    *head = temp;
}

int main()
{
   struct node *head = (struct node *) malloc(sizeof(struct node));
   head->data = 100;
   head->link = NULL;

   struct node *ptr = (struct node *) malloc(sizeof(struct node));
   ptr->data = 200;
   ptr->link = NULL;
   head->link = ptr;

   add_beg(&head, 300);

   ptr = head;

   while(ptr!=NULL){
    cout<<ptr->data<<endl;
    ptr = ptr->link;
   }

    //add node at begining pass by refarence

    return 0;
}
