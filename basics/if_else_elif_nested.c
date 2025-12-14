#include<stdio.h>
void main(){
    int a=2,b=1,c=0;
    if(a<b){// if statement
        printf("b is greater");
    }

    if (a>b){//if-else
        printf("a is greater");
    }
    else{
        printf("b is greater");
    }
if(a<b){//nested if else
    if(b>c){
        printf("a is greater");
    }
}

}