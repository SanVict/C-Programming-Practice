#include<stdio.h>
void main(){ 
    int n ;
    printf("Enter the value :");
    scanf("%d",&n);
    int temp=0;
    int a=0;int b =1;
    printf("%d %d",a,b);
    for(int i=0;i<=n;i++) {
        temp=a+b;
        printf(" %d ",temp);
        a=b;
        b=temp;
    }
}