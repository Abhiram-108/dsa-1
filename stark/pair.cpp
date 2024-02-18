#include<bits/stdc++.h>
using namespace std;
    struct node{
        int coeff;
        int pow;
        node *link;
    };
int main(){
    int n;
    cin>>n;
    node*head=NULL;
    for(int i=0;i<n;i++){
        int  x,y;
        cin>>x>>y;
        node*p=new node();
        p->coeff=x;
        p->pow=y;
        p->link=NULL;
        if(head==NULL || head->pow<p->pow){
            p->link=head;
            head=p;
        }
        else{
            node*q=head;
            while(q->link!=NULL && q->link->pow>=y){
                q=q->link;
            }
            p->link=q->link;
            q->link=p;

        }
    }
    node*temp=head;
    while(temp){
        cout<<temp->coeff<<" ";
        temp=temp->link;
    }

}