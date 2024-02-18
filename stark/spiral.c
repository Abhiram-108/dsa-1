#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        scanf("%d",&a[i][j]);

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        printf("%d ",a[i][j]);
        printf("\n");

    }
    printf("\n");
    int left=0,right=m-1,top=0,bottom=n-1;
    while(left<=right && top<=bottom){
        for(int i=top;i<=right;i++){
            printf("%d ",a[top][i]);
        }
        top++;
        
        for(int i=top;i<=bottom;i++){
            printf("%d ",a[i][right]);
        }
        right--;
        
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                printf("%d ",a[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                printf("%d ",a[i][left]);
            }
            left++;
        }
    }
}