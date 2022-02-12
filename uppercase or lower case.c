#include<stdio.h>
void main()
{
	char ch1;
	scanf("%c",&ch1);
	if(ch1>='a' && ch1<='z')
	{
		printf("Lower case");
	}
	else if(ch1>='A' && ch1<='Z')
	{
		printf("Upper case");
	}
}
