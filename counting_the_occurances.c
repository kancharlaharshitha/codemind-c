#include<stdio.h>
int main()
{
    char str[1000],ch;
    int i,x=0;
    scanf("%[^
]s",str);
    scanf("%s",&ch);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==ch)
        {
            x++;
        }
    }
    if(x>0)
    {
        printf("%d",x);
    }
    if(x==0)
    {
        printf("-1");
    }
}