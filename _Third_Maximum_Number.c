#include<stdio.h>
int main()
{
    int a,i,j,k,h,q;
    scanf("%d",&a);
    int b[a];
    for(i=0;i<a;i++)
		{
        scanf("%d",&b[i]); 
    	}
    for(i=0;i<a-1;i++)
	{
        for(j=0;j<a-i-1;j++)
			{
	            if(b[j]<b[j+1])
				{
	                q=b[j];
	                b[j]=b[j+1];
	                b[j+1]=q;
	            }
        	}
    }
    /*for(i=0;i<a;i++)
    {
    	printf("%d ",b[i]);
	}*/
    //printf("");
    for(i=0;i<a;i++)
		{
        for(j=i;j<a;j++)
				{
            if(i!=j)
					{
                if(b[i]==b[j])
							{
                    for( k=j;k<a;k++)
								{
                        b[k]=b[k+1];
                    }
                    a--;
                    j--;
                } 
            }
        }
    }
    /*for(i=0;i<a;i++)
    {
    	printf("%d ",b[i]);
	}
	//printf("
%d a 
",a);*/
    int w[a] ;
    int co=0;
    for(h=a-1;h>=0;h--)
	{
        w[co]=b[h];
	//printf("%d  ",w[co]);
		co+=1;
    }
   // printf("%d",a);
    if(a>=3)
    {
    	printf("%d",w[a-3]);
	}
	else if(a<3)
	{
		printf("%d",w[a-1]);
	}
}