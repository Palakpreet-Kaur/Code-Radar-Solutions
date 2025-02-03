#include <stdio.h>
void mirroredTriangle( int num){
    for(int i=0;i<num;i++){
        for(int space=1;space<num-i;space++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int num;
    scanf("%d",&num);
    mirroredTriangle(num);
    return 0;
}