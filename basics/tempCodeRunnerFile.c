#include<stdio.h>
void main(){
    char h='c';              printf("%d->%d\n",h,sizeof(h));
    short b=64;              printf("%d->%d\n",b,sizeof(b));
    int a=234;               printf("%d->%d\n",a,sizeof(a));
    long c=1234;             printf("%d->%d\n",c,sizeof(c));//based on complier
    long long d=9685741;     printf("%d->%d\n",d,sizeof(d));
    float e=2.132;           printf("%d->%d\n",e,sizeof(e));
    double f=2.35475;        printf("%d->%d\n",f,sizeof(f));
    double long g=31124841;  printf("%d->%d\n",g,sizeof(g));

    unsigned short i    ;    printf("%d\n",sizeof(i));//size diff but wont have neg value
    unsigned int j      ;    printf("%d\n",sizeof(j));
    unsigned long k     ;    printf("%d\n",sizeof(k));//based on complier
    unsigned long long l;    printf("%d\n",sizeof(l));
   i=-2;
   printf("%d",i);//return max possible value if wrongly input given
}