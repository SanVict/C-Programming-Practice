#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
if((n&(n-1))==0)
{printf("The Number %d is in power of two",n);}
 return(0);

}