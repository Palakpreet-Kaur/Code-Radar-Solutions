#include<stdio.h>
void main(){
    int num,i,j,k;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=i;j<=num;j++){
            printf("%d ",j);
        }printf("\n");
    }
}