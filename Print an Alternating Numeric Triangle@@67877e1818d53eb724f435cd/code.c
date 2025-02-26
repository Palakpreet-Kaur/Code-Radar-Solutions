#include<stdio.h>
int main(){
    int num,i,j,k=1;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2!=0){
                printf("0 ");
            }
            else{
                printf("1 ");
            }
            k++;
        }printf("\n");
    }
}