#include<stdio.h>
#include<string.h>
int main()
{ int j=0;
   char str1[20];
   gets(str1);
   printf("the string 1 is %s", str1);
   char str2[20];
   gets(str2);
   printf("the string 2 is %s", str2);
   int len1=strlen(str1);
   int len2=strlen(str2);
   for(int i=len1; i<=len1+len2;i++)
   {
   	str1[i]=str2[j];
   	j++;
   }
	 printf("%s",str1);
}
