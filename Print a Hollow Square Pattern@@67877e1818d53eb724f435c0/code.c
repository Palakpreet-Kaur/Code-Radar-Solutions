#include<stdio.h>
void main(){
    int num,i,j,k;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=num;j++){
            if(j==1 || j==num){
            printf("*");}
            /*else if(){
                printf("*");
            }*/
        }printf("\n");
    }
}