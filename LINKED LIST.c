#include<stdio.h>
#include<stdlib.h>
struct node *create();
struct node *getnode();
void display(struct node *);
struct node *insert(struct node *);
struct node *delete(struct node *);
struct node *revlist(struct node *);
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *head;
	int ch;
	while(1)
	{
		printf("1.Create\n2.Display\n3.Insert\n4.Delete\n5.Reversal\n5.Exit\n");
		printf("Enter the value :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	
				head=create();
				break;
			case 2:
				display(head);
				break;
			case 3:
				
				head=insert(head);
				break;
			case 4:	
			    head=delete(head);
				break;
			case 5:
				head=revlist(head);
			case 6:
			 	exit(0);
			 	break;
			default:
				printf("Enter Valid Choice :");	
		}
	}
}
struct node *getnode()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=0;
	n->next=NULL;
	return n;
}
struct node *create()
{
	
	struct node *head,*first,*newnode;
	first=getnode();
	head=first;
	newnode=getnode();
	printf("Enter the value:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	while(newnode->data!=-9)
	{
		first->next=newnode;
		first=newnode;
		newnode=getnode();
		printf("Enter the value:");
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
		printf("%d->",temp->data);
		temp=temp->next;
	}
}
struct node *insert(struct node *head)
{
	struct node *newnode,*temp;
	int ch,pos,i;
	temp=head;
	newnode=getnode();
	printf("Enter the value:");
	scanf("%d",&newnode->data);
	printf("1.Insert at beg\n2.Insert at end\n3.Insert at pos\n");
	printf("Enter the value:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			   newnode->next=head;
			   head=newnode;
			   return head;
			   break;
		case 2:
			   while(temp->next!=NULL)
			   {
			   	temp=temp->next;
			   }
			   temp->next=newnode;
			   return head;
			   break;
		case 3:
			   printf("Enter the Position :");
			   scanf("%d",&pos);
			   for(i=0;i<pos-1;i++)
			   {
			   	  temp=temp->next;
			   }
			   newnode->next=temp->next;
			   temp->next=newnode->next;
			   return head;
			   break;
		default:
			   printf("Enter Valid Choice :");	
			   break;
	}
}
struct node *delete(struct node *head)
{
	int pos,i,ch;
	struct node *temp;
	temp=head;
	printf("1.delete at beg\n2.delete at end\n3.delete at pos\n");
	printf("Enter the value:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			   head=temp->next;
			   break;
		case 2:
			   while(temp->next->next!=NULL)
			   {
			   	temp=temp->next;
			   }
			   temp->next=NULL;
			   return head;
			   break;
		case 3:
			   printf("Enter the Position :");
			   scanf("%d",&pos);
			   for(i=1;i<pos-1;i++)
			   {
			   	  temp=temp->next;
			   }
			   temp->next=temp->next->next;
			   return head;
			   break;
		default:
			   printf("Enter Valid Choice :");	
			   break;
	}
	
}
struct node *revlist(struct node *head)
{
	struct node *temp,*rhead,*newnode;
	temp=head;
	rhead=getnode();
	rhead->data=temp->data;
	newnode=getnode();
	while(temp->next!=NULL)
	{
		temp=temp->data;
		newnode->data=temp->data;
		newnode->next=rhead;
		rhead=newnode;
		newnode=getnode();
	}
	return head;
}


