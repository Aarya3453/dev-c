#include<stdio.h>

int main()

{
	int i,j,n;
	
	printf("\n Enter the number : ");
	scanf("%d",&n);
	
	printf(" \n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			
			if(j%2!=0)
				printf("1 ");
			
			else
				printf("0 ");
				
	printf("\n");				
	}
	
	return 0;
}