#include<stdio.h>
int main()
{
	int i,j,n,b;
	printf("enter rows,starting num");
	scanf("%d%d",&n,&b);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("%d ",b+i);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		printf("%d ",b+n-i-1);
		printf("\n");
	}
	return 0;
}
