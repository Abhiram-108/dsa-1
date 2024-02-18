#include<stdio.h>
#include<stdlib.h>
struct node{
    int power;
    int coeff;
    struct node*link;
};
struct node *insert(struct node*head,int co,int powr){
    struct node*p,*q;
    p=malloc(sizeof(struct node));
    p->power=powr;
    p->coeff=co;
    p->link=NULL;
    if(head==NULL || powr>head->power){
        p->link=head;
        head=p;
    }
    else{
        q=head;
        while(q->link!=NULL && q->link->power>powr){
            q=q->link;
        }
        p->link=q->link;
        q->link=p;
        
    }
    return head;
}
struct node*create(struct node*head){
    printf("enter the number of times\n");
    int n;
    int co,powr;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&co,&powr);
        head=insert(head,co,powr);
    }
    return head;

}
void print(struct node*head){
    struct node*temp=head;
    while(temp){
        printf("%dx^%d",temp->coeff,temp->power);
        temp=temp->link;
        if(temp!=NULL){
            printf("+");
        }
    }
    printf("\n");
}
int main(){
    struct node*head1=NULL,*head2=NULL;
    head1=create(head1);
    head2=create(head2);

    print(head1);
    print(head2);

}