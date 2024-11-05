#include<stdio.h>
int main()
{
	int n,i,a,j;
	printf("enter a number=\n");
	scanf("%d",&n);	
	for(j=2;j<=n;j++)
	{
	i=1;
	do{
		printf("%d*%d=%d\n",n,i,n*i);
		i++;
	}
	while(i<=n);
	printf("%d,",&a);
}
	return 0;
}


