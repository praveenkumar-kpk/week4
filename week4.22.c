#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter rows/2");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d",i+1);
			if(j<i)
			printf("*");
		}
		
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("%d",n-i);
			if(j<n-1-i)
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
