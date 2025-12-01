#include<stdio.h>
int fun(int n);
int main(){
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    fun(n);
    return(0);
}
int fun(int n){
    if(n==0){return 0;}
    fun(n-1);
    printf("%d\n",n);
    return(0);
}
