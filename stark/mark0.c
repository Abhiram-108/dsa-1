// You are using GCC
#include<stdio.h>
#include<stdlib.h>
struct poly{
    int coe,e;
    struct poly *next;
};
struct poly *create(struct poly *front,int k,int d){
    struct poly *temp;
    struct poly *nn=(struct poly *)malloc(sizeof(struct poly));
    nn->next=NULL;
    nn->coe=k;
    nn->e=d;
    if(front==NULL)
    front = nn;
    else{
        temp=front;
        while(temp->next!=NULL)
        front=front->next;
        front->next=nn;
    }
    return front;
}
struct poly *add(struct poly *front1,struct poly *front2){
    struct poly *nn,*temp,*t,*n;
    if(front1==NULL)
    front1=front2;
    else{
        t=front1;
        nn=front1,temp=front2;
        while(temp!=NULL && nn!=NULL){
            if(nn->e==temp->e){
                nn->coe=nn->coe+temp->coe;
                t=nn;
                nn=nn->next;
                temp=temp->next;
            }
            else if(nn->e > temp->e){
                t=nn;
                nn=nn->next;
            }
            else if(nn->e <temp->e){
                n=(struct poly *)malloc(sizeof(struct poly));
                n->coe=temp->coe;
                n->e=temp->e;
                if(t==front1){
                    n->next=front1;
                    front1=n;
                }
                else{
                    n->next=t->next;
                    t->next=n;
                }
            }
        }
        if(temp!=NULL){
            n=front1;
            while(n->next!=NULL)
            n=n->next;
            n->next=temp;
        }
    }
    return front1;
}
void display(struct poly *front){
    int ct=1;
    struct poly *nn;
    nn=front;
   while(nn!=NULL){
       if(nn->coe==0 && nn->e==0 && ct==1)
       ct=1;
       else 
       ct=0;
   }
   if(ct)
   printf("NULL");
   else{
       printf("%dx^%d",front->coe,front->e);
       front=front->next;
       while(front!=NULL){
        if(front->coe >0 &&front->e >1)
        printf(" + %dx^%d",front->coe,front->e);
        else if(front->coe > 0 && front->e<=1){
            if(front->e==1)
            printf(" + %dx",front->coe);
            else
            printf(" + %d",front->coe);
        }
        else if(front->coe <0 &&front->e >1)
        printf(" + %dx^%d",front->coe,front->e);
        else if(front->coe < 0 && front->e<=1){
            if(front->e==1)
            printf("%dx",front->coe);
            else
            printf("%d",front->coe);
        }
        front=front->next;
       }
   }
}
int main(){
    struct poly *front1=NULL,*front2=NULL;
    int coe,ex;
    while(1){
        scanf("%d%d",&coe,&ex);
        if(coe==0 && ex==0)
        break;
        else
        front1=create(front1,coe,ex);
    }
    while(1){
        scanf("%d%d",&coe,&ex);
        if(coe==0 && ex==0)
        break;
        else
        front2=create(front2,coe,ex);
    }
    front1 = add(front1,front2);
    display(front1);
}