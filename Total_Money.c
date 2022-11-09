#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int l=0;l<t;l++)
    {
        long long int D,d,P,Q;
        scanf("%lld%lld%lld%lld",&D,&d,&P,&Q);
        long long int sum=0,n,q;
        n=D/d;
        q=D%d;
        for(int i=0;i<n;i++)
        {
            sum+=(P+(Q)*i)*d;
        }
        sum+=(P+(Q)*n)*q;
        printf("%lld
",sum);
    }
    
}