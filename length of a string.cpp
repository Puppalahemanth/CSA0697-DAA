#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("enter any string ");
	gets(str);
	printf("length of the string is: %d", strlen(str));
	return 0;
}