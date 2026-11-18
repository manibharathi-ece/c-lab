#include<stdio.h>
#include<string.h>

int main()
{
	char str[50],str2[50],str3[100];
	int res;
	
	printf("Enter the first string:");
	scanf("%s",&str);
	
	printf("Enter the second string:");
	scanf("%s",&str2);
	
	res=strlen(str);
	
	printf("\n Length of the first string=%d",res);
	
	strcpy(str2,str);
	printf("\n Copied string=%s",str2);
	
	res=strcmp(str,str2);
	if(res==0)
	{
	   printf("\n Both strings are equal");
	}
	else
	{
		printf("\n Both strings are not equal");
	}
	
	strcat(str,str2);
	printf("\n Concatenated string=%s",str);
	
	return 0;
}
