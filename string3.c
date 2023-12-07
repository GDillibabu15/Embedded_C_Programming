#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	printf("enter the string\n");
	scanf("%s",str);
	
	int i,j,n=strlen(str),count=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}
		}
		if(count<1)
		{
			printf("%c",str[i]);
			i=n;
		}
		else
		{
			count=0;
		}
	}
}

