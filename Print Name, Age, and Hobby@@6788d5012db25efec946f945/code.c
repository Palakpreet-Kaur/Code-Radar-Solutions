#include<stdio.h>
int main(){
    char name[50],hobby[50];
    int age;
    scanf("%s %d %s",&name,&hobby,&age);
    printf("Name: %s\n Age: %d\n Hobby: %s",name,age,hobby);
    return 0;
}