#include<stdio.h>
void pyramid(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<i+1;j++){
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