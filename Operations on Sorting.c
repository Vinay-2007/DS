#include<stdio.h>
#include<stdlib.h>
void bblsort(int arr[],int n)
{
	int i,j,temp;
	printf(" BUBBLE SORT \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;i++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void selsort(int a[],int n)
{
	printf(" SELECTION SORT \n");
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{                                                                                                                                        		min=i;
		for(j=i+1;j<n;j++)
		{                                                                                                                                                                                               
			if(a[min]>a[j])
			{
				min=j;
			}                                                     
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
}
void inssort(int a[],int n)
{
	int i,j,temp;
	printf(" INSERTION SORT \n");
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j<=0;j--)
		{
			if(a[j]>temp)
			{
				a[j+1]=a[j];
			}
			else
			{
				break;
			}
		}
		a[j+1]=temp;
	}
}
int main ()
{
	int x,i,n,arr[50],b[50];
	printf("Enter the size of the array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(1)
	{
		printf("Enter your choice between 1-4 : \n");
		printf("1.Bubble Sort \n2.Selection sort \n3.Insertion sort \n4.Exit \n");
		scanf("%d",&x);
		switch (x)
		{
			case 1:
				bblsort(arr,n);
				printf("The Elements after Bubble Sort are :");
				break;
			case 2:
				selsort(arr,n);
				printf("The Elements after Selection Sort are :");
				break;
			case 3:
				inssort(arr,n);
				printf("The Elements after Insertion Sort are :");
				break;
			case 4:
				exit(0);
				break;
	 		default:
				printf("Enter valid choice betn 1-4 !!!\n");
		}
	}
	for(i=0;i<n;i++)
	{		
		printf("%d ",arr[i]);
	}	
}

