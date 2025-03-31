#include<stdio.h>
void reverse(int arr[],int start,int end){
    while(start < end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=arr[start];
        start++;
        end--;
    }
void rotateArray(int arr[],int n,int k){
    k=k%n;
    if(k==0)
    return;
    reverse(arr[],0,n-1);
    reverse(arr[],0,k-1);
    reverse(arr[],k,n-1);
}
void printArray(int arr[],int n){
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    rotateArray(arr[],n,k);
    printArray(arr[]);
}
}