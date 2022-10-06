#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int c=0,k=0,a,b,l;
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            printf("-1
");
        }
        else
        {
            for(long long int i=0;i<b;i++)
            {
                if(i*i%b==a)
                {
                    printf("%d
",i);
                    k=1;
                    break;
                }
            }
            if(k==0)
            printf("-1
");
        }
    }
}