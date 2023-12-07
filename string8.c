#include<stdio.h>
#include<string.h>

int main()
{
	
	char str[50];
	printf("Enter the string\n");
	scanf("%s",str);

	char ch;
	printf("Enter the character to search \n");
	scanf(" %c",&ch);
	int i,count=0;

	for(i=0;i<strlen(str);i++)
	{
		if(ch == str[i])
		{
			count++;
		}
	}
	printf("o/p:");
	printf("%d \n",count);
	return 0;
}
