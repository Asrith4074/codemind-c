#include<stdio.h>
int main()
{
    int b,a,i,r,s=0,p=1,req;
    b=a;
    scanf("%d",&a);
    for(i=a;a!=0;a=a/10)
    {
        r=a%10;
        s=s+r;
        p=p*r;
    }
    req=p-s;
    printf("%d",req);
}