#include<stdio.h>

int main()
{
	int a[50],b[10][10];
	int i,j,n,rows,cols,sum1=0,sum2=0;
	
	printf("Enter the number of elements in 1D array:");
	scanf("%d",&n);
	
	
	
	for(i=0;i<n;i++)
	{
		printf("Enter the elements %d:",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n 1D array elements:\n");
	
	for(i=0;i<n;i++)
	{
	   printf("%d",a[i]);
	sum1=sum1+a[i];
	}
	printf("\n Sum of the array:\n",sum1);
	
	printf("\n Enter the number of rows in 2D array: ");
	scanf("%d",&rows);
	
	printf("\n Enter the number of columns in 2D array:");
	scanf("%d",&cols);
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("Enter the elements%d:",i);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n 2D array elements:\n");
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			sum2=sum2+b[i][j];
		}
	}
	printf("\n Sum of the array=%d\n",sum2);
	
	
	return 0;
	
	
	
	
	
	
	
}