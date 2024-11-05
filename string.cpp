#include<stdio.h>
int main()
{
   char str1[20];
   gets(str1);
   printf("the string 1 is %s", str1);
   char str2[20];
   gets(str2);
   printf("the string 2 is %s", str2);
   printf("%s",(str1+str2));
	 
}
