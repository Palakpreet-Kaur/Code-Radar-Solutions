#include<stdio.h>
void invertedTriangle( int num){
    for(int i=0;i<num,i++){
        for(int j=num-1;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int num;
    scanf("%d",&num);
    invertedTriangle(num);
    return 0;
}