#include<stdio.h>
void main(){
    int num,i,j,k;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=num-i;j>=1;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }printf("\n");
    }
}