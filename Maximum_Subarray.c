#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m=-1000,c=0;
    for(i=0;i<a;i++)
    {
        c=0;
        for(j=i;j<a;j++)
        {
            c+=arr[j];
            if(m<c)
            {
                m=c;
            }
        }
    }
    printf("%d",m);
    return 0;
}