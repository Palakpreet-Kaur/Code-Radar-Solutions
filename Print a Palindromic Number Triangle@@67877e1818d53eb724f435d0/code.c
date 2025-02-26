#include<stdio.h>
void main(){
    int num,i,j,a,b,k;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=num-i;j>=0;j--){
            printf(" ");
        }for(k=1;k<=i;k++){
            a=1;
            b=0;
            printf("%d ",a+b);
             b=a;
            a=a+b;
           
        }printf("\n");
    }
}