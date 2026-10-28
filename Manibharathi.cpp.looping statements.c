#include<stdio.h>

int main()
{
	int n,i,sum,res;
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("\nNumber from 1 to %d:\n",n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
	}
	
	sum=0;
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	
	res=1;
	i=1;
	do
	{
		res=res*i;
		i++;
	}
	while(i<=n);
	
	printf("Sum=%d\n",sum);
	printf("Factorial=%d\n",res);
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
}