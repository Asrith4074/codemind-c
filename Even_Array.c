#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0;
    for(i=1;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
    {
        c++;
    }
    }
    if(n==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}