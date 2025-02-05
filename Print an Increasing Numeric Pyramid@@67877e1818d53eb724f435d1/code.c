#include <stdio.h>
pyramid(int num){
   int i,j,space;
   for(i=0;i<num;i++){
    for(space=1;space<i;space++){
        printf(" ");
    }for(j=0;j<i;j++){
        printf("%d",j);
    }
   } 
}

int main() {
    int num;
    scanf("%d",&num);
    pyramid(num);
    return 0;
}