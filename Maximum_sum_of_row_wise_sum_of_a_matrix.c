#include<stdio.h>
int main()
{
    int m,n,j,i,arr[100][100],s=0,s1=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            s=s+arr[i][j];
        }
        if(s>s1)
        {
            s1=s;
        }
    }
    printf("%d",s1);
}