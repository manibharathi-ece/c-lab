#include<stdio.h>
#include<stdlib.h>
/* Call by Value*/

int add By value(int a,int b)
{
	int res;
	res=a+b;
	return res;
}
/* Call by Reference*/

void swap By reference(int *a,int *b);
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int a, b,res;
	int *ptr;
	int *arr;
	int n,i,sum;
	
	printf("Enter the first number:");
	scanf("%d",&a);
	
	printf("Enter the second number:");
	scanf("%d",&b);
	
	/*Pointer Demonstration*/
	ptr=&a;
	printf("\n Pointer Demonstration:");
	printf("\nValue of a=%d",*ptr);
	printf("\n Address of a=%p",(void*)ptr);
	
	/* Call by Value*/
	res=add By value(a,b);
	printf("\n\n Call by Value:");
	printf("\n Sum=%d",res);
	
	/* Call by Reference*/
	
	swap By reference(&a,&b);
	printf("\n\n Call by Reference:");
	printf("\n After swapping,first number=%d",a);
	printf("\n After swapping,second number=%d",b);
	
	/* Dynamic Memory Allocation*/
	
	printf("\n\n Dynamic Memory Allocation:");
	printf("\n Enter the number of elements:");
	scanf("%d",&n);
	
	arr=(int*)malloc(n*size of(int));
	if(arr==NULL)
	{
		printf("Memory allocation failed");
	}
	
	printf("Enter %d elements:\n",n);
	
	for(i=0;i<n;i++)
	{
		sum=sum + arr[i];
	}
	
	printf("Sum of dynamically allocated array=%d",sum);
	free(arr);
	
	return 0;
}
