#include<stdio.h>
#include<stdlib.h>
struct poly{
    int exp,coe;
    struct poly *next;
};
struct poly *front=NULL;
struct poly * insert(struct poly *front,int c,int e){
    struct poly *temp,*n,*rear;
    struct poly *nn=(struct poly *)malloc(sizeof(struct poly));
    nn->exp=e;
    nn->coe=c;
    nn->next=NULL;
    if(front==NULL){
        front=nn; 
        front->next=NULL;
    }
    else if(front->exp < nn->exp){
        nn->next=front;
        front=nn;
    }
    else if(front->exp > nn->exp){
        temp=front;
        while(temp->exp>=nn->exp){
            n=temp;
            temp=temp->next;
            if(temp==NULL)
            break;
        }
        if(temp!=NULL){
        n->next=nn;
        nn->next=temp;
        }
        else{
            rear=front;
             while(rear->next!=NULL)
             rear=rear->next;
            rear->next=nn;
            rear=nn;
    }
    } 
    return front;  
}
void create(int e,int c){
    struct poly *rear,*n,*temp;
    struct poly *nn=(struct poly *)malloc(sizeof(struct poly));
    nn->exp=e;
    nn->coe=c;
    nn->next=NULL;
    if(front==NULL){
        front=nn; 
        front->next=NULL;
    }
    else if(front->exp < nn->exp){
        nn->next=front;
        front=nn;
    }
    else if(front->exp > nn->exp){
        int ct=0;
        temp=front;
        while(temp->exp>=nn->exp){
            if(temp->exp==nn->exp){
            temp->coe=temp->coe+nn->coe;
            ct=1;
            break;
             }
            n=temp;
            temp=temp->next;
            if(temp==NULL)
            break;
        }
        if(temp!=NULL && ct!=1){
        n->next=nn;
        nn->next=temp;
        }
        else if(temp==NULL ){
            rear=front;
             while(rear->next!=NULL)
             rear=rear->next;
            rear->next=nn;
            rear=nn;
    }
    }  
}
void multiply(struct poly *front1,struct poly *front2){
    struct poly *temp;
    while(front1!=NULL){
        temp=front2;
        while(temp!=NULL){
            create(front1->exp+temp->exp,front1->coe*temp->coe);
            temp=temp->next;
        }
        front1=front1->next;
    }
}
void display(struct poly *front){
    printf("%dx^%d ",front->coe,front->exp);
    front=front->next;
    while(front!=NULL){
        if(front->coe>0 && front->exp>1)
        printf(" + %dx^%d",front->coe,front->exp);
        else if(front->coe>0 && front->exp <=1){
            if(front->exp==1)
              printf(" + %dx ",front->coe);
              else
              printf(" + %d",front->coe);
        }
        else if(front->coe<0 && front->exp > 1 )
        printf("%dx^%d",front->coe,front->exp);
        else if(front->coe<0 && front->exp <=1){
            if(front->exp==1)
              printf("%dx ",front->coe);
              else
              printf("%d",front->coe);
        }
        front=front->next;
    }
}
struct poly *delete(int r,struct poly *front){
    struct poly *hg,*f,*h;
    h=f=hg=front;
    while(front!=NULL){
        if(front->exp==r){
            if(hg==f){
            front=front->next;
            return front ;
            }
            else{
            hg->next=front->next;
            return h;
            }
        }
        hg=front;
        front=front->next;
    }
    return h;
}
int main(){
    struct poly *front1=NULL;
    struct poly *front2=NULL;
    int n;
    scanf("%d",&n);
    int c,e;
    while(n--){
        scanf("%d%d",&c,&e);
        front1=insert(front1,c,e);
    }
    int k;
    scanf("%d",&k);
    while(k--){
        scanf("%d%d",&c,&e);
        front2=insert(front2,c,e);
    }
    multiply(front1,front2);
    int r;
    scanf("%d",&r);
    printf("Result of the multiplication: ");
    display(front);
    printf("\nResult after deleting the term: ");
    front = delete(r,front);
    display(front);
 }