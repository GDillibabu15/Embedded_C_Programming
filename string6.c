#include<stdio.h>
#include<string.h>

int main()
{
	
	char str[50];
	printf("Enter the string\n");
	scanf("%s",str);

	char temp[50];
	int i,j,k=0;

	for(i=0;i<strlen(str);i++)
	{
		for(j=i+1;j<strlen(str);j++)
		{
			if(str[i] == str[j])
			{
				temp[k]=str[i];
				k++;
				break;
			}
		}
	}
	printf("o/p:");
	for(i=0;i<strlen(temp);i++)
	{
		printf("\"%c\" ",temp[i]);
	}
	
	printf("\n");
	return 0;
}
