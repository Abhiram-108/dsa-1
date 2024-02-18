#include<stdio.h>
#include<string.h>
int max=5;
int rear=-1,front=-1;
void enque(int);
void deque();
void display();
void enque(int x){
    if(front==-1 && rear==max-1 || rear+1==front)
    printf("\nover flow");
    else if
        (rear==-1){
        rear=0;
        front=0;
    }
    else if(rear==max-1)
    rear=0;
    else
    rear++;
    a[rear]=x;

}
void deque(){
    if(front==-1 && rear==-1)
    printf("\n underflow");
    int k;
    k=a[front];
    else if(front==max-1){
        front==0;
    }
    else if(front==rear)
    {
        rear=-1;
        front=-1;
    }
    else{
        front++;
    }
void display(){
    for(int i=front;i<=rear;i++){
        printf("%d ",a[rear]);
    }
}
int main(){
    
}
    
    
}