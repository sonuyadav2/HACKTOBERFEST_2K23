#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* left,*right;
    node(int key)
    {
        data=key;
        left=NULL;
        right=NULL;
    }
};
node* insert(node* root,int k)
{
    if(root==NULL)
    {
        return new node(k);
    }
    if(root->data>k)
    {
        root->left=insert(root->left,k);
    }
    else if(root->data<k)
    {
        root->right=insert(root->right,k);
    }
    return root;
}

void inorder(node* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

int main()
{
    struct node* root=NULL;
    root=insert(root,50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);   
    inorder(root);
}
