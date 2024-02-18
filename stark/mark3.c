#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct queue{
    int size;
    int r,f;
    int *arr;
};
int main(){
    struct queue q;
    printf("ENTER THE ARRAY SIZE\n");
    scanf("%d",&q.size);
    q.r=q.f=-1;
    q.arr=(int*)malloc(q.size * sizeof(int));
    enque(&q,12);
    enque(&q,13);
    deque(&q);
    deque(&q);
}


int isfull(struct queue*q){
    if(q->r==q.size-1)
    return 1;
    else return 0;
}
void enque(struct queue*q,int value){
    if(isfull(q))
    printf("QUEUE IS OVERFLOW\n");
    else
    q->r++;
    q->arr[q->r]=value;
}
int deque(struct queue*q){
    int value=-1;
    if(q->r==q->f)
    printf("NO ELEMENT IS PRESENT FOR DEQUE\n");
    else
    q->f++;
    value=q->arr[q->f];
    return value;
}