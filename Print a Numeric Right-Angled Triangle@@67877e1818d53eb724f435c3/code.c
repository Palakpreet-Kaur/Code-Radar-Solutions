#include<stdio.h>
void NumericTriangle(int num){
    for(int i=0;i<num;i++){
        for(int j=1;j<i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
int main(){
    int num;
    scanf("%d",&num);
    NumericTriangle(num);
    return 0;
}