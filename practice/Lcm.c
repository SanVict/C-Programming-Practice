#include<stdio.h>
#include<string.h>
void gcd();
void lcm();
int main(){
    char arr[2];
    printf("GCD or LCM :");
    for(int i=0;i<3;i++){
        scanf("%c",&arr[i]);
    }
    if(arr=='GCD'||'gcd'||'Gcd'){
        gcd();
     }
    if(arr='LCM'||'lcm'||'Lcm'){
        lcm();
    }
return(0);
}

void lcm(){
    int a,b,max,lcm;
    printf("Enter Two Numbers/n");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    lcm=max;
    while(lcm % a==0|| lcm % b==0){
        break;
        lcm++;
    }
printf("%d",lcm);
}
