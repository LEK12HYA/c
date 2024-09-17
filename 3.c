#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n>0)
	{
		printf("Positive number is given");
	}
	else if(n<0)
	{
		printf("Negative number is given");
	}
	else
	{
		printf("Zero is given");
	}
}