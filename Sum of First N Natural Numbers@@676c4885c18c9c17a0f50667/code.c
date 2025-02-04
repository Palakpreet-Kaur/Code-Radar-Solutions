#include <stdio.h>

void sum(int num) {
    int i=1,sum=0;
    while(i>=num){
        sum+=i;
        i++;
    }
    printf("%d",sum);
}

int main() {
    int num;
    scanf("%d",&num);
    sum(num);
    return 0;
}