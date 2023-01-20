#include<stdio.h>
int main()
{
    int l,b,w,A,C,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    A=((l+2*w)*(b+2*w))-(l*b);
    C=A*c;
    printf("%d",C);
}