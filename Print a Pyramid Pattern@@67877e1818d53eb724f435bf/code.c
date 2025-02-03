#include<stdio.h>
void pyramid(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<i;j+2){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int num;
    scanf("%d",&num);
    pyramid(num);
    return 0;
}