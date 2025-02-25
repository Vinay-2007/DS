#include<stdio.h>
int main()
{
	int s,k,a[5],low=0,high,mid;
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
	high=s-1;
	while(low<high)
	{
		mid=(high+low)/2;
		if(a[mid]==k)
		{
			printf("Element found at %d position ! ",mid);
			break;
		}
		else if(a[mid]>k)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(low>=high)
	{
		printf("Element not found ! ");
	}
}
