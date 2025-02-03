#include<stdio.h>
void pyramid(int num){
    for(int i=0;i<num;i++){
        for(int space=1;space<=num-i;space++){
            printf("  ");
        }
        for(int j=0; j<= 2*i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int num;
    scanf("%d",&num);
    pyramid(num);
    return 0;
}