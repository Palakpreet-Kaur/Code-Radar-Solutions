#include<stdio.h>
int isPrime(int num){
    if(num<=1)return 0;
    else{
        for(int i=0;i*i=num;i++){
            if(num%i==0)
                return 0;
            
            else
                return 1;
            
        }
    }
}