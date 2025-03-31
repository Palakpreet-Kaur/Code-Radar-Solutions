#include<stdio.h>
void findElement(int arr[],int n){
    int max=0;min=100000
    for(int i=0;i<n;i++){
        if(i>max){
            max=i;
        }
        else if(i<min){
            min=i;
        }
    }
    printf("%d %d",min,max);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    findElement(arr,n);
    return 0;
}