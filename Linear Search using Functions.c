#include<stdio.h>
int main()
{
	int s,k,abc,a[5];
	int i;
	printf("Enter the array values :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the size of the array :");
	scanf("%d",&s);
	printf("Enter the element to be searched : ");
	scanf("%d",&k);
	abc=linearSearch(a[5],s, k);	
	if(abc==-1)
	{
		printf("Element not found !\n");
	}	
	else
	{
		printf("Element found in the %d position ! \n",abc);
	}
}
int linearSearch(int a[5],int size,int k)
{
	int i;
	for(i=0;i<5;i++)
	{
		if(a[i]==k)
		{
			return i;
		
		}
		else
		{
			return -1;
		}
	}
}

