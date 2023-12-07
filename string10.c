#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	printf("Enter the string\n");
	scanf("%[^\n]s",str);

	int n=strlen(str), mid=n/2;
	int i=0,j=mid+1;
	char temp;
	for(;i<n/2;i++)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		j++;
	}

	puts(str);
	return 0;
}
