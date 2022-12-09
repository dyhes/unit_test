#include "stdio.h"
int main()
{
    int i,n;
    long s1=0,s2=0;
    printf("Please enter N:");
    scanf("%d",&n);
    if(n>=0)
        for(i=n;i<=2*n;i++)
            s1=s1+i;
    else for(i=n;i>=2*n;i--)
            s1=s1+i;
    i=n;
    if(i>=0)
        while(i<=2*n)
            s2=s2+i++;
    else while(i>=2*n)
            s2=s2+i--;
    printf("Result1=%ld  result2=%ld\n",s1,s2);
}

