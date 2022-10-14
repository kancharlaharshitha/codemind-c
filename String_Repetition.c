#include<stdio.h>
int main()
{
    char str[10000];
    scanf("%[^
]s",str);
    long long n,a=0,len=0;
    scanf("%lld",&n);
    for(long long i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a')
        {
            a++;
        }
        len++;
    }
    long long l=n/len;
    long long k=n%len;
    long long size=l*a;
    for(long long i=0;i<k;i++)
    {
        if(str[i]=='a')
        {
            size++;
        }
    }
    printf("%lld",size);
}