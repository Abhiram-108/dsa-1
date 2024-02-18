#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node*create_sll(struct node*head){
    struct node*p,*q;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==0){
            head=malloc(sizeof(struct node));
            scanf("%d",&head->data);
            
        p=head;
        }
        else{
            q=malloc(sizeof(struct node));
            scanf("%d",&q->data);
            q->link=NULL;
            p->link=q;
            p=q;
        }
    }
        return head;
}
struct node*insertbeg(struct node*head){
    struct node*p;
     p=malloc(sizeof(struct node));
    scanf("%d",&p->data);
    
    p->link=head;
    head=p;
    return head;
}
struct node*insertend(struct node*head){
    struct node*q;
    q=malloc(sizeof(struct node));
    scanf("%d",&q->data);
    q->link=NULL;
    struct node*p;
    p=head;
    while(p->link!=NULL){
        p=p->link;
    }
    p->link=q;
    return head;

}
struct node*delfir(struct node*head){
    head=head->link;
    return head;
}
void display(struct node*head){
if(head){
    display(head->link);
    printf("%d ",head->data);
}
printf("\n");}
int main(){
    
    struct node* head;
    head=create_sll(head);
    head=insertbeg(head);
    head=insertend(head);
    head=delfir(head);
display(head);
    struct node*p;
    p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->link;
    }
}