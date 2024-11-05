#include<stdio.h>
#include<string.h>
int main(){
	int j=0;
	char str1[50]="hello";
	char str2[50]="world";
	int len1=strlen(str1);
	int len2=strlen(str2);
	for(int i=len1;i<len1+len2;i++)
	{
		str1[i]=str2[j];
		j++;
	}
	printf("%s",str1);
}

