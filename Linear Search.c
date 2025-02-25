#include<stdio.h>
int main()
{
	int s,i;
	int arr[5];
	printf("Enter Array Elements : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search for :");
	scanf("%d",&s);
	for(i=0;i<5;i++)
	{
		if(s==arr[i])
		{
			printf("The element you are searching for is in index of %d position  ",i);
		}
		else
		{
			printf("The element you're searching is not in the Array ! ");
		}
	}
}

