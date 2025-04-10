#include<stdio.h>
void sort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printarr(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr[],n);
    printarr(arr[],n);
}