#include <stdio.h>
#include <string.h>


int main()
{
	char str1[50],str2[50];
	printf("enter the strings\n");
	scanf("%s %s",str1,str2);
	
	int i, j, count=0, len1=strlen(str1), len2=strlen(str2);
	
	if(len1 != len2)
	{
		printf("not an anagram\n");
	}
 
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			if(str1[i] == str2[j])
			{
				count++;
			}
		}
	}

	if( count == len1 )
	{
		printf("is an anagram\n");
	}
	else
	{
		printf("not an anagram\n");
	}
	
	return 0;
}	
