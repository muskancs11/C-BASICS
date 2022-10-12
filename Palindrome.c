#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char a[50],n;
	printf("ENTER:");
	scanf("%[^\n]s",&a);
	n=strlen(a);
	for(i=0,j=n-1;i<=j;i++,j--)
	{
		if(a[i]!=a[j])
		{
			printf("NOT A PALINDROME");
			return 0;
		}
	}
	printf("PALINDROME");
	return 0;
}
