#include<stdio.h>
void main(){
    int n,i;
    int flag=0;
    printf("enter N :");
    scanf("%d",&n);
    for(i=0;i<=n/2;i++){
        if( i*i==n){
            flag=1;
            break;
        }
        }
if(flag==1){printf("The number %d is perfect square",n);}
if(flag==0){printf("the number %d is not a perfect square",n);}
    
}