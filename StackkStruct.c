#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct stack
{
    int items[MAX];
    int top;
};
void push(struct stack*,int);
int pop(struct stack*);
void display(struct stack*);
int peek(struct stack*);
int main()
{
    int ch,ele;
    struct stack stp;
    stp.top=-1;
    while(1)
    {
        printf("\n1.Push\n2.pop\n3.display\n4.peek\n5.Exit");
        printf("\nEnter your choice");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
                printf("Enter element to insert");
                scanf("%d",&ele);
                push(&stp,ele);
                break;
        case 2:
                ele=pop(&stp);
                if(ele==-1)
                {
                    printf("stpack is empty");
                }
                else
                {
                    printf("Deleted Element id %d",ele);
                }
                break;
        case 3:
                display(&stp);
                break;
        case 4:
                ele=peek(&stp);
                if(ele==-1)
                {
                    printf("stpack is empty");
                }
                else
                {
                    printf("the TOP element is %d\n",ele);
                }
                break;
        case 5:
                exit(0);
                break;
        default:
                printf("Enter valid Choice");  
                break;
        }
    }
    return 0;
}
void push(struct stack *stp,int ele)
{
    if(stp->top==MAX-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        stp->top=stp->top+1;       
        stp->items[stp->top]=ele;
    }
}
int pop(struct stack *stp)
{
    int ele;
    if(stp->top==-1)
    {
        return -1;
    }
    else
    {
        ele=stp->items[stp->top];
        stp->top=stp->top-1;
        return ele;
    }
}
int peek(struct stack *stp)
{
    int ele;
    if(stp->top==-1)
    {
        return -1;
    }
    else
    {
        ele=stp->items[stp->top];
        return ele;
    }
}
void display(struct stack *stp)
{
    int i;
    if(stp->top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        for(i=stp->top;i>=0;i--)
        {
            printf("|%d|\n",stp->items[i]);
        }
    }
}
