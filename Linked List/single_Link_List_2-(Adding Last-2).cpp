#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *link;
};

struct node* add_at_end(struct node *ptr, int x){

        struct node *temp = (struct node *) malloc(sizeof(struct node));

        temp->data = x;
        temp->link = NULL;

        ptr->link = temp;

        return temp;
};

int main()
{
    struct node *head = (struct node *) malloc(sizeof(struct node));
    head->data = 50;
    head->link = NULL;

    struct node *ptr = head;

    ptr = add_at_end(ptr, 100);
    ptr = add_at_end(ptr, 150);
    ptr = add_at_end(ptr, 200);

    ptr = head;

    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }

    //In this process time complexity in o(1) but 1st part is was O(n);

    return 0;
}
