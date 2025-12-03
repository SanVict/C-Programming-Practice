#include<stdio.h>
#include<string.h>
void main(){
    int i,n;
    printf("Enter The Number to Reverse : ");
    scanf("%d",&n);
    int Temp  =n; 
    int sum =0;
    if(n==0){printf("The Reversed Number is %d",n);}
    printf("The Reversed Number is: ");
    while(n>0){
        int s = n%10;
         printf("%d",s);
        n=n/10;
    }
   
}
