#include<stdio.h>
#include<string.h>

int main()
{

	int len;
	printf("Enter the string length\n");
	scanf("%d",&len);
	
	char num[len];
	printf("Enter the numeric string\n");
	scanf("%s",num);
	
	int count = 0;
	for(int i=0;i<len;i++)
	{
		if(num[i]>'0' && num[i]<'9')
		{
			count++;
		}
	}

	if(count == len)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}

	return 0;
}

