#include<stdio.h>
#include<stdlib.h> 
struct node *Create();
void display(struct node *);

struct node
{
	int data;
	struct node *next; 
}; 
int main()
{
	int ch,head;
	while(1)
	{
		printf("1.Create\n2.Display\n3.Insert\n4.Delete\n5.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case(1):
				head=Create();
				printf("Created\n");
				break;
			case(2):
				display(head);
				break;
			case(3):
				printf("Inserted\n");
				break;
			case(4):
				printf("deleted\n");
				break;
			case(5):
				exit;
				printf("\n");
			default:
				printf("Enter valid choice\n");				
		}
	}
}
struct node * Create()
{
	struct node *head,*first,*newnode;
	first=(struct node*)malloc(sizeof(struct node));
	head=first;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter Value:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	while(newnode->data!=-9)
	{
		first->next=newnode;
		first=newnode;
		printf("Enter Value:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;     		
	}
	return head->next;
}
void display(struct node *head)
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}


