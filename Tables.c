#include<stdio.h>
int main()
{
    int tab,a,b,i,num;
    scanf("%d %d",&num,&tab);
    for(i=1;i<=tab;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",num,i,num*i);
        }
    }
return 0;
}