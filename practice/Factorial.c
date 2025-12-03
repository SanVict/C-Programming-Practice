#include<stdio.h>
#include<string.h>
int factorial(int a);
int main(){
    int n;
    printf("Enter Value :");
    scanf("%d",&n);
    printf("The factorial of %d is %d ",n, factorial(n));
    return(0);
    }
int s=1;
 int factorial(int a){
    if(a==0) {return(1);}
     s=s*a;
    factorial(a-1);1
    return (s);
 }  

