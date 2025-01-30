#include<stdio.h>
int main(){
    int age,status;
    scanf("%d %d",&age,&status);
    (age>=18 && status==1)?printf("Eligible"):printf("Not Eligible");
    return 0;
}