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
        while(q->link!=NULL && q->link->power>=powr){
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
        scanf("%d%d",&co,&powr);
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
struct node*add(struct node*x,struct node*y){
    struct node*p=x,*q=y,*r=NULL;
    while(p->link!=NULL && q->link!=NULL){
     
        if(p->power==q->power){
            
            r=insert(r,p->coeff+q->coeff,p->power);
        
            p=p->link;
            q-q->link;
        }
      else  if(p->power>q->power){
            r=insert(r,p->coeff,p->power);
            p=p->link;
        }
      else  if(p->power<q->power){
           r=insert(r,q->coeff,q->power);
            q=q->link;
        }

    }
    while(p){
        r=insert(r,p->coeff,p->power);
        p=p->link;
    }
    while(q){
        r=insert(r,q->coeff,q->power);
        q=q->link;
    }
    return r;
}
 struct node * multi(struct node*head1,struct node*head2){
    struct node *ptr1,*ptr2,*result=NULL;
    ptr1=head1;
    ptr2=head2;
    if(ptr1==NULL||ptr2==NULL){
        printf("NO POLYNOMAIl");
        return result;
    }
    while(ptr1!=NULL){
        while(ptr2!=NULL){
            result=insert(result,ptr1->coeff*ptr2->coeff,ptr1->power+ptr2->power);
                ptr2=ptr2->link;}
            ptr1=ptr1->link;
            ptr2=head2;
        
    }
    return result;
    
}

int main(){
    struct node*head1=NULL,*head2=NULL,*head3=NULL,*head4=NULL;
    head1=create(head1);
    head2=create(head2);
    head3=add(head1,head2);
    head4=multi(head1,head2);
    print(head1);
    print(head2);
    print(head3);
    print(head4);

    
  
  
}