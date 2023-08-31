#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf(" enter any string ");
	gets(str1);
	printf("\n string 1 = %s", str1);
	strcpy(str2,str1);
	printf("\n string 2 = %s", str2);
	gets(str2);
	return 0;
}