#include<stdio.h>
int main()
{ 
    int r,n,temp,no,rev=0,sum1=0,revl=0,sum2=0,count=0;
    scanf("%d %d",&n,&no);
    count=no;
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        rev=(rev*10)+r;
        temp/=10;
    }
    while(n>0)
    {
        r=n%10;
        if(count==0)
        {
            break;
        }
        sum1=(sum1*10)+r;
        n/=10;
        count--;
    }
    count=no;
    while(rev>0)
    {
        r=rev%10;
        if(count==0)
        {
            break;
        }
        sum2=(sum2*10)+r;
        rev/=10;
        count--;
    }
    while(sum1>0)
    {
        r=sum1%10;
        revl=(revl*10)+r;
        sum1/=10;
    }
    if(revl>sum2)
    {
        printf("%d",revl-sum2);
    }
    else
    {
        printf("%d",sum2-revl);
    }
    return 0;
}