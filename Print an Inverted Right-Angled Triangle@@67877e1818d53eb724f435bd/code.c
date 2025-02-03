#include<stdio.h>
void invertedTriangle( int num){
    for(i=0;i<num,i++);{
        for(j=num;j>0;i--);{
            printf("*");
        }
    }
}
int main(){
    int num;
    scanf("%d",&num);
    invertedTriangle(num);
    return 0;
}