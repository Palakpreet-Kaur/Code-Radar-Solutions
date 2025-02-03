#include<stdio.h>
void NumericTriangle(int num){
    for(int i=1;i<num+1;i++){
        for(int j=1;j<i+1;j++){
            printf("%d ",j);
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