#include <stdio.h>

void table(int num) {
    int i=1;
    while(i<11){
        printf("%d * %d = %d\n",num,i,num*i);
        i++;

    }
}

int main() {
    int num;
    scanf("%d",&num);
    table(num);
    return 0;
}