#include<stdio.h>
void squarePattern(int num){
    for(i=0;i<num;i++){
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int num;
    scanf("%d",&num);
    squarePattern(num);
    return 0;
}