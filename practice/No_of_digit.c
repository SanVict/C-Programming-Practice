
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value :");
    scanf("%d",&n);
    int temp=n;
    int count=0;
    if(n==0){count=1;}
    while(n>0){
        count++;
        n=n/10;
    }
    printf("The Number of Digit in %d is %d",temp,count);
    return(0);
}