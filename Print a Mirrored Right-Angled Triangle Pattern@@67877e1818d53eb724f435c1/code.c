#include <stdio.h>
void mirroredTriangle(num){
    for(int i=0;i<num;i++){
        for(int space=1;sapce<num-i;space++){
            printf(" ");
        }
        for(int j=0;j<num;j++){
            printf("*");
        }
        printf("\n")
    }
}

int main() {
    int num;
    scanf("%d",&num);
    mirroredTriangle(num);
    return 0;
}