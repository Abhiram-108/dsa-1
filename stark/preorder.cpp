#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*left,*right;

};

struct node* newnode(int data){
    struct node*p= malloc(sizeof(struct node));
    p->data=data;
    p->left=NULL;p->right=NULL;
    return p;
}
void preorder(struct node*root){
    if(root==NULL)
    return;
    stack<node*>st;
    st.push(root);
    while(!st.empty()){
        printf("%d ",st.top());
        st.pop();
        
    }if(root->right){
        st.push(root->right);

    }
    if(root->left){
        st.push(root->left);
    }

}

int main(){
    struct node*root=newnode(10);
    root->left=newnode(1);
    root->right=newnode(2);
    preorder(root);
}