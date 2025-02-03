#include<stdio.h>
void squarePattern(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<i;j++){
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