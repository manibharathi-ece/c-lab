#include<stdio.h>

int main()
{
	int a,b,choice,res;
	printf("\n=====BRANCHING STATEMENTS=====\n");
	
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	
	printf("\n-----MENU-----\n");
	printf("1.check positive,negative,zero\n");
	printf("2.check even or even\n");
	printf("3.Find the largest number\n");
	printf("4.check divisibility of 5\n");
	
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	printf("\n-----RESULT---\n");
	
	switch(choice)
	{
		case 1:
			if(a>0)
			{
				printf("%d is positive",a);
			}
		    else if(a<0)
		    {
		    	printf("%d is negative",a);
			}
		    else
		    {
		    	printf("%d is zero",a);
			}
			break;
		
		case 2:
			if(a%2==0)
			{
				printf("%d is even",a);
			}
		    else
		    {
		    	printf("%d is odd",a);
			}
			break;
		case 3:
		  if(a>b)
		  {
		  	res=a;
		  	printf("%d is largest number",res);
			  }	
		  else if(b>a)
		  {
		  	res=b;
		  	printf("%d is largest number",b);
				}
		  else
		  {
		  	printf("Both number are equal");
		  }
		  break;
		  
		  case 5:
		  	if(a%5==0)
		  	{
		  		printf("%d is divisible by 5",a);
			  }
			else
			{
				printf("%d is not divisible by 5",a);
			  }  
			break;
			
			default :
			printf("Invalid choice");						  
	}
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}