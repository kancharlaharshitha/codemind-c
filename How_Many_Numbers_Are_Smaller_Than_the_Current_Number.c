#include<stdio.h>
int main()
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int j,m,c=0;
        m=a[i];
        for(j=0;j<n;j++)
        {
            if(m>a[j])
            {
                c++;
            }
        }
        printf("%d ",c);
    }
}