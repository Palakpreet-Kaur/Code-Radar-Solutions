#include<stdio.h>
void isprime(int num){
    if(num<=1){
        printf("Not Prime");
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            printf("Not Prime");
            break;
        }
        else{
            printf("Prime");
        }
    }
}
int main(){
    int num,a;
    scanf("%d",&num);
    isprime(num);
    return 0;
}