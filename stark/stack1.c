#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*cs(struct node* head){
    int n;
    struct node*p,*q;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==0){
            head=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&head->data);
            head->link=NULL;
            p=head;

        }
        else{
            q=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&q->data);
            q->link=p;
            p=q;

        }
    }
        return p;
   
} 
void display(struct node*head){
    // printf("hello");
        if(head==NULL) return;
        display(head->link);
        printf("%d ",head->data);
        
}
    
    int main(){
        struct node*head;
        head=cs(head);
display(head);
    }