#include<stdio.h>

int main()
{
	int a[3][3],r,c,sum=0;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("enter elements %d%d",r,c);
			scanf("%d",&a[r][c]);
		}
	}
	return 0;
}

