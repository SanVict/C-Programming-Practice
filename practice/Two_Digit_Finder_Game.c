#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int generator();
int input();
void person();
int sepo(int d);
int sept(int e);

int main(){
    int n = generator();
    int win =0;
    printf("\nYou have 10 chances to find the number lets try!\n");
    for(int i=0;i<10;i++){
        printf(" chance: %d \n",i+1);
        int inp=input();
        printf("%d\n",inp);    
        int c = sepo(n);
        int a =sept(n);
        int d = sepo(inp);
        int b =sept(inp);
         if((a==b)&&(c==d)){printf("Hurrah You have found the number!\n");win=1;return (0);}
        else if((a==d)&&(c==b)){printf("Your so close only position wrong just switch it!\n");}
        else if((a==b)&&(c!=d)){printf("Your got one number and one position correct try again!\n");}
        else if((a!=b)&&(c==d)){printf("Your got one number and one position correct try again! \n");}
        else if((a==d)&&(c!=b)){printf("Your got one number but no position correct try again! \n ");}
        else if((a!=d)&&(c==b)){printf("Your got one number but no position correct try again !\n");}
        else if((a!=b)&&(c!=d)){printf("No  number and no position correct 'dont give up try again !'\n");}
    }if(win==0){printf("Oops Better Luck Next Time !\n");}
    return(0);
}


int generator(){
 srand((unsigned int)time(NULL));
 int ra =(rand()%90)+10;
 return(ra);
}

int input(){
    int s;
    printf("Enter the Number(Two digit):");
    scanf("%d",&s);
    if(s<0||s>100){
    printf("Invalid Input! Try again\n");
    return input();
    }
    return(s);
}

int sepo(int d){
    d=d%10;
    return(d);
}

int sept(int e){
    e=e/10;
    return e;
}

