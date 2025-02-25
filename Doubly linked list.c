//doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};

struct node *head=NULL;

void insertAtBeg()
{
	int val;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode!=NULL)
	{
		printf("\n Enter data to Insert: ");
		scanf("%d",&newnode->data);
		newnode->data=val;
		newnode->prev=NULL;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			newnode->prev=head;
		}
		else
		{
			newnode->next=head->next;
			newnode->prev=head;
			head->next->prev=newnode;
			head->next=newnode;
		}
	}
	else
	printf("\n The list is empty");
}

void traverse()
{
	if(head==NULL)
	printf("\n The list is empty");
	else
	{
		struct node *temp=head;
		printf("\n The elements in the list are:");
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("NULL");
	}
}

	int main()
	{
		int ch;
		printf("\n 1.Insert At Beg");
		printf("\n 2.Insert At End");
		printf("\n 3.Insert At Before Node");
		printf("\n 4.Insert At After Node");
		printf("\n 5.Traverse");
		printf("\n 6.Deletion At Beg");
		printf("\n 7.Deletion At End");
		printf("\n 8.Deletion At Before Node");
		printf("\n 9.Deletion At After Node");
		printf("\n 10.Reverse traverse iteratively");
		printf("\n 11.Exit");
		while(1)
		{
		    printf("\n Enter your Choice:");
		    scanf("%d",&ch);
		    switch(ch){
		    	case 1:insertAtBeg();
		    	      break;
		    	case 5:traverse();
		    	      break;
		    	case 11:exit(0);
		    	default :printf("\n Invalid choice");
			}
	}
}


































