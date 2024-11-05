#include <stdio.h>
void swap (int *p, int *q);

int main()
{
	int a,b;
	printf("Enter the first value: ");
	scanf("%d",&a);
	printf("Enter the second value: ");
	scanf("%d",&b);
	
	printf("The values before the swap are: %d and %d.\n",a,b);
	
	swap(&a,&b);
	
	printf("The values after the swap are %d and %d.",a,b);
}

void swap (int *p, int *q)
{
	int c;
	 c = *p;
	*p = *q;
	*q =  c;
}
