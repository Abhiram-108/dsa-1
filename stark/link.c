#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
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
    return head;
}
int main(){
    struct node *head;
    head=createlin(head);
   struct node*ptr;
   ptr=head;
   while(ptr!=NULL){
    printf("%d,",ptr->data);
    ptr=ptr->link;
   }

}
