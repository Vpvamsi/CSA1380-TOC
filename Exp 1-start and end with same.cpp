#include<stdio.h>
#include<string.h>
int main()
{
	int i,l;
	char st[100];
	printf(" Enter the sting :");
	scanf("%[^\n]c",&st);
	l=strlen(st);
	if(st[0]=='a' && st [l-1]=='a')
	   printf("string is accepted.");
	else
	   printf("string is not accepted.");
	return 0;
}
