#include<stdio.h>
int main(){
  int x,y,t;
  scanf("%d%d",&x,&y);
  t=y;
  y=x;
  x=t;
  printf("%d/t%d",x,y);
}