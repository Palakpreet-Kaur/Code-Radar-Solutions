#include<stdio.h>
void TrianglePattern(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
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