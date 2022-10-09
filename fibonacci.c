#include<stdio.h> 
int main()
{
    int i,n,tl=0,t2=1,term;
    scanf("%d",&n);
    printf("%d %d ",tl,t2);
    term=tl+t2;
    for(i=0;i<n-2; ++i)
    {
        printf("%d ",term);
        tl=t2;
        t2=term;
        term=tl+t2;
    }
    return 0;
}