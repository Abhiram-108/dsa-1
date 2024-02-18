#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
int main(){
    int n,m;
    printf("ENTER NO OF TERMS:");
    scanf("%d",&n);
    struct node*head1=NULL,*curr,*p,*head2=NULL;
    for(int i=0;i<n;i++){
        
        if(i==0){
            head1=malloc(sizeof(struct node));
            scanf("%d",&head1->data);
            head1->link=NULL;
            p=head1;

        }
        else{
            curr=malloc(sizeof(struct node));
            scanf("%d",&curr->data);
            curr->link=NULL;
            p->link=curr;
            p=curr;
        }
    }struct node*r=NULL;
    


    printf("enter no of terms\n");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        if(i==0){
            head2=malloc(sizeof(struct node));
            scanf("%d",&head2->data);
            head2->link=NULL;
            r=head2;
        }
        else{
            curr=malloc(sizeof(struct node));
            scanf("%d",&curr->data);
            curr->link=NULL;
            r->link=curr;
            r=curr;
        }
    }
    


struct node*x=NULL,*y=NULL;
while(head1!=NULL && head2!=NULL){
    if(head1->data>head2->data){
        if(x==NULL){
            x=head2;
            y=x;
        }
        else{
            y->link=head2;
            y=y->link;

        }
        head2=head2->link;
    }
    else{
        if(x==NULL){
            x=head1;
            y=x;
        }
        else{
            y->link=head1;
            y=y->link;

        }
        head1=head1->link;
    }
    }
    if(head1)
    y->link=head1;
    if(head2)
    y->link=head2;
while(x!=NULL){
    printf("%d ",x->data);
    x=x->link;
}

}
