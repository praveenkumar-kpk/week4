#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter rows");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("%c ",n-i+j+64);
		printf("\n");
	}
	
	return 0;
}
