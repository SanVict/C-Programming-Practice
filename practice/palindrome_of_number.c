#include<stdio.h>
void main(){
    int n;
    printf("Enter the value :");
    scanf("%d",&n);
    int rev =0;
    int temp = n;
    if(n==0){printf("The Number is Palindrome");}
    while(n>0){
        rev=(rev*10)+(n%10);
        n=n/10;

    }
    if(temp==rev){
        printf("The Number is Palindrome");
    }
    else {
         printf("The Number is not an Palindrome");
    }

}