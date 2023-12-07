#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	printf("entetr the length of string");
	scanf("%d",&n);

	char ch[n];
	printf("Enter the string\n");
	scanf("%s",ch);
	
	int i,j,count=0;
	
	for(i=0;i<n;i++)
	{
		if('{' == ch[i])
		{
			for(j=i+1;j<n;j++)
			{
				if('}' == ch[j])
				{
					count++;
				}
			}
		}
		else if('(' == ch[i])
		{
                        for(j=i+1;j<n;j++)
                        {
                                if('}' == ch[j])
                                {
                                        count++;
                                }
                        }
		}
		else if('[' == ch[i])
		{
                        for(j=i+1;j<n;j++)
                        {
                                if(']' == ch[j])
                                {
                                        count++;
                                }
                        }
		}
		else if('<' == ch[i])
		{
                        for(j=i+1;j<n;j++)
                        {
                                if('>' == ch[j])
                                {
                                        count++;
                                }
                        }
		}
	}
	
	if(count==n/2)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
}
