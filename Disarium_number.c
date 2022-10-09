#include<stdio.h>
#include<math.h> 
int main()
{
    int num;
    scanf("%d",&num);
    int numl=num,c=0; 
    while(numl!=0)
    {
        numl/=10;
        c++;
    }
    numl=num;
    int sum=0;
    while(numl!=0)
    {
        int rem=numl%10;
        sum+=pow(rem,c);
        numl/=10;
        c--;
    }
    if(sum==num)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}