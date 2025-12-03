#include<stdio.h>
#include<string.h>
void main(){
    int i,n;
    printf("Enter n : ");
    scanf("%d",&n);
    int Temp  =n; 
    int sum =0;
    while(n>0){
        int s = n%10;
        sum=sum+s;
        n=n/10;
    }
    printf("The Sum of %d is %d",Temp,sum);
}