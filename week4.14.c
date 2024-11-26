#include<stdio.h>
int main()
{
	int i,j,s,n;
	printf("enter rows (odd)");
	scanf("%d",&n);
	for(i=0;i<(n+1)/2;i++)
	{
		for(s=0;s<(n+1)/2-i-1;s++)
		printf("  ");
		for(j=0;j<2*i+1;j++)
		printf("* ");
		printf("\n");
	}
	for(i=0;i<(n-1)/2;i++)
	{
		printf("  ");
		for(s=0;s<i;s++)
		printf("  ");
		for(j=0;j<n-1-2*i-1;j++)
		printf("* ");
		printf("\n");
		
	}
	return 0;
}
