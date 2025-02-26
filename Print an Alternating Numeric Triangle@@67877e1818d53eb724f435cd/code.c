#include<stdio.h>
int main(){
    int num,i,j,k=1;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            if((k+i)%2!=0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
            k++;
        }printf("\n");
    }
}