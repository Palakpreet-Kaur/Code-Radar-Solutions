#include<stdio.h>
int main(){
    int num,i,j;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            if(j%2!=0){
                printf("0");
            }
            else{
                printf("1");
            }
        }printf("\n");
    }
}