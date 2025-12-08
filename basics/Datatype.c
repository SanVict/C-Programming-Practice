#include<stdio.h>
int main(){
    char h='c';              printf("%c->%zu\n",h,sizeof(h));
    short b=64;              printf("%d->%zu\n",b,sizeof(b));
    int a=234;               printf("%d->%zu\n",a,sizeof(a));
    long c=1234;             printf("%ld->%zu\n",c,sizeof(c));//based on complier
    long long d=9685741;     printf("%lld->%zu\n",d,sizeof(d));
    float e=2.132;           printf("%f->%zu\n",e,sizeof(e));
    double f=2.35475;        printf("%f->%zu\n",f,sizeof(f));


    unsigned short i    ;    printf("%d\n",sizeof(i));//size diff but wont have neg value
    unsigned int j      ;    printf("%d\n",sizeof(j));
    unsigned long k     ;    printf("%d\n",sizeof(k));//based on complier
    unsigned long long l;    printf("%d\n",sizeof(l));
   i=-2;
   printf("%d",i);//return max possible value if wrongly input given
}