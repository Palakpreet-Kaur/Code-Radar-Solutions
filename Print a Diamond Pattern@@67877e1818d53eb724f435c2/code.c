#include<stdio.h>
void main(){
    int num,i,j,k,u,v,w;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=num-i;j>=1;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }for(int l=2;l<=i;l++){
            printf("*");
        }printf("\n");
    }
    for(u=1;u<num;u++){
        for(v=1;v<=u;v++){
            printf(" ");
        }
        for(w=num-1;w>=1;w--){
            printf("*");
            //num--;
        }for(int x=num-i;x>=1;x--){
            printf("*");
        }printf("\n");
    }
}