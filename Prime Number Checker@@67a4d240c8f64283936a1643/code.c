#include<stdio.h>
int isPrime(int num){
    int i,prime=0;
    for(i=0;i<num;i++){
        if(num<=1){
            prime=0;
        }
        else{
            for(i=2;i=num/2;i++){
                if(num%i==0){
                    prime=0;
                }
            else{
                prime=1;
            }
            }
        }
    }
}