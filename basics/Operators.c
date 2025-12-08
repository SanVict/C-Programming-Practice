#include<stdio.h>
void main(){
    int a,b,c,d,s;//change value of a,b,c,d to see the difference of operators
    a=2;b=3;c=3;d=5;
    printf("\nArithmetic Operators\n");
    printf("Add %d + %d = %d\n",a,b,a+b);
    printf("Sub %d - %d = %d\n",a,b,a-b);
    printf("Mul %d * %d = %d\n",a,b,a*b);
    printf("Div %d / %d = %d\n",a,b,a/b);
    printf("Mod %d %% %d = %d\n",a,b,a%b);

    printf("Unary operator : \n");
    printf("%d a++(a incremented but on next excecution)\n",a++);
    printf("%d ++a(a incremented but on same excecution)\n",++a);
     printf("%d a--(a decremented but on next excecution)\n",a--);
    printf("%d --a(a decremented but on same excecution)\n",--a);
    printf("%d\n",-a);
    printf("%d \n",+a);

    printf("Logical operator\n");
    printf("%d && %d = %d\n",b,c,b &&c);
    printf("%d || %d = %d\n",b,c,b ||c);
    printf("!%d = %d\n",c,!c);

    printf("relational operator\n");
    if(a==1){printf("a ==1 \n");}
    if(a!=1){printf("a!=1\n");}
    if(a>b){printf("a>b\n");}
    if(a<b){printf("a<b\n");}
    if(c<=d){printf("c<=d");}
    if(c>=d){printf("c>=d");}

    printf("Bitwise operator:\n");
    printf("%d & %d = %d\n",c,d,c&d);
    printf("%d | %d = %d\n",c,d,c&d);
    printf("%d ^ %d = %d\n",c,d,c&d);
    printf("~c= %d\n",~c);
    printf("left shift of a<<=%d\n",a<<1);//shifting one time
    printf("right shift of a>>=%d\n",c>>2);//shifting two time


    printf("Assignment operator\n");
    printf("c+=d-s>c=%d = ",c+=d);//all operator can use this sub,mul shift logical and bitwise etc..//


}