#include<stdio.h>

int main()
{
	int a[3][3],r,c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d,t",a[r][c]);
		}
		printf("\n");
	}
	return 0;
}

