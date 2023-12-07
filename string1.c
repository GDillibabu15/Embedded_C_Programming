#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	printf("enter the string\n");
	scanf("%s",str);
	
	int i,j,count=1;
	for(i=0;i<strlen(str);i++)
	{
		for(j=i+1;j<strlen(str);j++)
		{
			if(str[i]==str[j])
			{
				str[j]='2'+j;
				count++;
			}
		}
		if(count>1)
		{
			printf("repeated character is %c\n",str[i]);
			count=1;
			str[i]='1';
		}
	}
	return 0;
}
