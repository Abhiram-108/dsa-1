#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left,*right;
};
struct node*createdll(struct node*head){
    int i,n;
    scanf("%d",&n);
    struct node*curr,*p;
    for(i=1;i<=n;i++){
    if(i==1){
        head=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&head->data);
        head->left=NULL;
        p=head;
    }else{
    curr=malloc(sizeof(struct node));
    scanf("%d",&curr->data);
    curr->left=p;
    p->right=curr;
    p=curr;
    }
    }return head;
}
struct node*addbeg(struct node*head){
    struct node*p;
    p=malloc(sizeof(struct node));
    printf("\nENTER DATA TO BE ADD AT BEG");
    scanf("%d",&p->data);
    p->left=NULL;
    p->right=head;
    head->left=p;
     head=p;
    return head;
}
struct node*addend(struct node*head){
    struct node*curr,*p;
    curr=malloc(sizeof(struct node));
    printf("\nENTER THE LAST ELEMENT TO BE ADDED AT END");
    scanf("%d",&curr->data);
    curr->right=NULL;
    p=head;
    while(p->right!=NULL){
        p=p->right;

    }
    curr->left=p;
    p->right=curr;
    
return head;
}
struct node*delfir(struct node*head){
    struct node*p;
    p=head;
    p=p->right;
    head=p;
    head->left=NULL;
    return head;
}
struct node*delend(struct node*head){
    struct node*p,*del;
    p=head;
    while(p->right!=NULL){
        p=p->right;   
    }
p->left->right=NULL;
    free(p);
    return head;
}
struct node*addmid(struct node*head){
    int i=1,pos;
    printf("\nENTER POSITION VALUE TO BE ENTER");
    scanf("%d",&pos);
    struct node*p;
    p=head;
    struct node*curr=malloc(sizeof(struct node));
    scanf("%d",&curr->data);
    while(i!=pos){
        p=p->right;
        i++;
    }curr->right=p->right;
    curr->left=p;
    p->right=curr; 
}
struct node*delmid(struct node*head){
    int i=1,pos;
    printf("\nENTER POSITION VALUE TO BE DELETED");
    scanf("%d",&pos);
    struct node*p,*q;
    p=head;
    q=head;
    while(i!=pos){
        
        p=p->right;
        q->right=p;
        i++;
    }
    q->right=p->right;
    p->right->left=q;
    free(p);
    return head;
}
int main(){
    struct node *head;
    head=createdll(head);
    head=addbeg(head);
    head=addend(head);
    head=delfir(head);
    head=delend(head);
    head=addmid(head);
    head=delmid(head);
    struct node*p;
    p=head;
    while(p!=NULL){
        printf("%d,",p->data);
        p=p->right;
    }
}