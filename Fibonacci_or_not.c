#include<stdio.h> 
int main()
{
    int n,c,a=0,b=1;
    scanf("%d",&n);
    if(n==a || n==b)
    { 
        printf("True");
    }
    c=a+b;
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}