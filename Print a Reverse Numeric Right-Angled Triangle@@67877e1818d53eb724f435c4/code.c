#include<stdio.h>
void main(){
    int num,i,j,k;
    scanf("%d",&num);
    for(i=num;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d ",j);
            
        }printf("\n");
    }
}