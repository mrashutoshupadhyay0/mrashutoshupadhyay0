#include<stdio.h>

int main()
	{
		int a[3][3],i,j,sum;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("enter element of a %d%d",i+1,j+1);
				scanf("%d",&a[i][j]);
				
			}
		}
		for(i=0;i<3;i++)
		{
		printf("%d\t",a[i][i]);
	}
		}
		
			


