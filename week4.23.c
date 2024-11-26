#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter rows");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<7;j++)
		{
			if(i%2==0&&j==6)
			printf("%d",i+2);
			else if(i%2==1&&j==0)
			printf("%d",i+2);
			else
			printf("%d",i+1);
			
		}
		printf("\n");
	}
		return 0;
	}
