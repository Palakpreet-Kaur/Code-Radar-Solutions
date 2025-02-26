#include<stdio.h>
void main(){
    int num,i,j,a,b=1,k;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=num-i;j<=0;j--){
            printf(" ");
        }for(k=1;k<=i;k++){
            a=0+k;
            printf("%d ",a);
        }
    }
}