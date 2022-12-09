#include<stdio.h>
int main()
{
    int n,z=0,o=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        z+=1;
        else
        o+=1;
    }
    i=0;
    while(i<z)
    {
        printf("0 ");
        i+=1;
    }
    i=0;
    while(i<o)
    {
        printf("1 ");
        i+=1;
    }
}
