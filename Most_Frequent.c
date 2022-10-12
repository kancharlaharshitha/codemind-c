#include<stdio.h>
int main()
{
    int n,i,j,s=0,k=0,v;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                s++;
            }
        }
        if(s>k)
        {
            k=s;
            v=arr[i];
        }
        else if(s==k)
        {
            k=s;
            if(v>arr[i])
            {
                v=arr[i];
            }
        }
    }
    printf("%d",v);
}