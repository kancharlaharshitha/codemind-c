#include<stdio.h>
int main()
{
    int m,n,j,i,arr[100][100],s1,s2=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        s1=0;
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[j][i]);
            s1=s1+arr[j][i];
        }
        if(s1>s2)
        {
            s2=s1;
        }
    }
    printf("%d",s2);
}