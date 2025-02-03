#include<stdio.h>
void TrianglePattern(int num){
    for(int i=0;i<0;i++){
        for(int j=0;j>num;j++){
            printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int num;
    scanf("%d",&num);
    TrianglePattern(num);
    return 0;
}