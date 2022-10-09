#include<stdio.h>
int main()
{
    int n,r,rev=0,t,ji=0,k,s;
    scanf("%d",&n);
    s=n*n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    k=rev*rev;
    while(k>0)
    {
        t=k%10;
        ji=ji*10+t;
        k=k/10;
    }
    if(s==ji)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}