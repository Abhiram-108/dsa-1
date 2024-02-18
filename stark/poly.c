#include<stdio.h>
#include<stdlib.h>
struct node{
    int power;
    int coeff;
    struct node*link;
};
void create(int x,int y,struct node*head){
    
    if(head){head=malloc(sizeof(struct node));
        head->power=x;
        head->coeff=y;
       head->link=NULL; 
       struct node*temp;
       temp=head;
    }
    else{
        struct node*q;
        q=malloc(sizeof(struct node));
        q->power=x;
        q->power=y;
        temp->link=q;
        q=temp;

        
    }
}
void addpoly(struct node*p1,struct node*p2,struct node*res){
    while(p1 && p2){
        struct node res=malloc(sizeof(struct node));
        if(p1->power>p2->power){
            struct node res=malloc(sizeof(struct node));
            res->power=p1->power;
            res->coeff=p1->coeff;
            p1=p1->link;
        }
        if()
    }
}
int main(){
    struct node*p1=NULL,*p2=NULL,res*=NULL;
    create()
    
}