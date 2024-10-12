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

void Inorder(struct node* root){
    if(root == NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<endl;
    Inorder(root->right);
}

void Preorder(struct node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<endl;
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(struct node* root){
    if(root== NULL){
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<endl;

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


    cout<<"Inorder traversal"<<endl;
    Inorder(root);

    cout<<"Preorder traversal"<<endl;
    Preorder(root);

    cout<<"PostOrder traversal"<<endl;
    Postorder(root);



    return 0;
}


