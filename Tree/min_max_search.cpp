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

void Find_Min(struct node* root){
    struct node* ptr = root;

    while(ptr->left != NULL){
        ptr = ptr->left;
    }
    cout<<ptr->data<<endl;
}

void Find_Max(struct node* root){
    struct node* ptr = root;

    while(ptr->right != NULL){
        ptr = ptr->right;
    }
    cout<<ptr->data<<endl;
}

bool search_node(struct node* root, int val){

    if(root == NULL){
        return false;
    }

    if(root->data == val){
        return true;
    }

    if(root->data > val){
       return search_node(root->left, val);
    }
    else{
      return  search_node(root->right, val);
    }
}


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


    cout<<"minimum value :"<<endl;
    Find_Min(root);

    cout<<"maximum value :"<<endl;
    Find_Max(root);




    if(search_node(root, 122)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;
}


