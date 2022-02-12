#include<stdio.h>
#include<string.h>
void main()
{
	char str[1000];
	scanf("%s",str);
	int up=0,lw=0,di=0,sp=0,i;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			up++;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			lw++;
		}
		else if(str[i]>=48 && str[i]<=57)
		{
			di++;
		}
		else
		{
			sp++;
		}
	}
	printf("Upper case = %d\nLower case = %d\nDigits = %d\nSpecial characters = %d",up,lw,di,sp);
}
