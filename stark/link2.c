#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *createlin(struct node *head){
    int i,n;
    struct node*curr;
    scanf("%d",&n);
            struct node*p;
    for(i=1;i<=n;i++){
        if(i==1){
            head=malloc(sizeof(struct node));
            scanf("%d",&head->data);
            head->link=NULL; 
            p=head;
        }
        else{
            curr=malloc(sizeof(struct node));
            scanf("%d",&curr->data);
             p->link=curr;
             curr->link=NULL;
             p=curr;    
        }

        
    }
    return head;}
    struct node *addbeg(struct node*head){
        struct node *curr=malloc(sizeof(struct node));
        scanf("%d",&curr->data);
        curr->link=head;
        head=curr;
        return head;
    }
    struct node*addend(struct node*head){
        struct node*curr=malloc(sizeof(struct node));
        scanf("%d",&curr->data);
        curr->link=NULL;
        struct node*p;
        p=head;
        while(p->link!=NULL){
            p=p->link;
        }
        p->link=curr;
        return head;
    }
    struct node*addmid(struct node*head){
        printf("\nENTER POSITION VALUE TO BE ADD");
int pos;
scanf("%d",&pos);
struct node*curr=malloc(sizeof(struct node));
scanf("%d",&curr->data);
struct node*p;
p=head;
int i=1;
while(pos!=i){
    p=p->link;
    i++; 
}
curr->link=p->link;
p->link=curr;
return head;
    }
    struct node*delfir(struct node*head){
        struct node*p;
        p=head->link;
        head=p;
        return head;
    }
    int main(){
        struct node *head;
    head=createlin(head);
    head=addbeg(head);
    head=addend(head);
    head=addmid(head);
    head=delfir(head);
    struct node*p;
    p=head;
    while(p!=NULL){
        printf("%d,",p->data);
        p=p->link;
    }
    }