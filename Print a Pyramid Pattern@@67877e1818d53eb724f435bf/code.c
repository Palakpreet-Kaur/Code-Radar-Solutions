#include<stdio.h>
void pyramid(int num){
    for(i=0;i<num;i++){
        for(j=0;j<i+1;j++){
            printf(" * ");
        }
    }
}
int main(){
    int num;
    scanf("%d",&num);
    pyramid(num);
    return 0;
}