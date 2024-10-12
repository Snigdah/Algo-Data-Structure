#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* CreateNode(int data){
    struct node* root = (struct node *)malloc(sizeof(struct node));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
};
struct node* CreateTree(struct node* root, int val){
    struct node* ptr = root;

    if(root==NULL){
       ptr = CreateNode(val);
       return ptr;
    }

    if(root->data >= val){
       root->left = CreateTree(root->left, val);
    }
    else{
        root->right = CreateTree(root->right, val);
    }

   return ptr;
};



int main()
{
    int t;
    cin>>t;

    struct node *root = NULL;

    while(t--){
        int val;
        cin>>val;
        root = CreateTree(root,val);
    }




    return 0;
}

