#include<stdio.h>
void main(){
    int num,i,j,k;
    for(i=1;i<=num;i++){
        for(j=num;j>=i;j--){
            printf("%d",j);
        }printf("\n");
    }
}