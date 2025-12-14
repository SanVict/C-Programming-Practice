#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int armstrongnumber(int n);
int main(){
    int n;
    printf("Enter  number of elements :");;
    scanf("%d",&n);
    int arr[n];
    printf("\n enter the elements :");
    for(int i=0;i<n;i++){
        printf("array of a[%d] :",i);
      scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        armstrongnumber(arr[i]);
    }
    return(0);
}

int armstrongnumber(int n){
    int temp=n;
    int t =n;
    int sum=0;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    for(int i=0;i<count;i++){
        int f=temp%10;
         sum=sum+(f*f*f);
        temp=temp/10;
    }
    if(sum==t){printf("The number %d is armstrong number\n",t);}
    return(0);
}