#include<stdio.h>
struct node{
    int data;
    int priority;
    struct node*link;
};

int main(){
int n;
cin>>n;
struct node*head=NULL;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    struct node*p=malloc(sizeof(struct node));
    p->data=x;
    p->priority=y;
    p->link=NULL;


        if((head==NULL) ||(head->priority<y)){
            p->link=head;
            head=p;
        }
        struct node*q=head;
        while(q->link!=NULL&&q->link->priority>y){
            q=q->link;
        }
        p->link=q->link;
        q->link=p;
    
}
struct node*temp;
temp=head;
while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;

    }
    return 0;
    }