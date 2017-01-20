#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node *stack;
int isempty(stack s);
stack createstack();
void push(stack s,int num);
int top(stack s);
void pop(stack s);
void makeempty(stack s);
void display(stack s);
int isempty(stack s)
{
	if(s->next==NULL)
	return 1;
}
stack createstack()
{
	stack s;
	s=(struct node*)malloc(sizeof(struct node));
	if(s==NULL)
		perror("Failed to allocate memory\n");
		s->next=NULL;
	return s;
}
void makeempty(stack s)
{
	if(s==NULL)
	{
		perror("create stack first");
	}
	else
	{
		while(isempty(s)!=1)
		{
			pop(s);
		}
	}
}
void push(stack s,int num)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
		perror("Memory allocation failed\n");
	else
	{
		newnode->next=s->next;
		s->next=newnode;
		newnode->data=num;
	}
}
int top(stack s)
{
	if(isempty(s)!=1)
	{
		return s->next->data;
	}
	else
		perror("Stack is empty\n");
	return 0;
}
void pop(stack s)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(isempty(s)==1)
	{
		perror("Stack is empty");
	}
	else
	{
		temp=s->next;
		s->next=temp->next;
		free(temp);
	}
}
void display(stack s)
{
	if(s->next==NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		do
		{
			s=s->next;
			printf("%d\n",s->data);
		}	
		while(s->next != NULL);
	}
}
int main()
{
	int option,num;
	stack head;
	head =(struct node*)malloc(sizeof(struct node));
	head->next=NULL;
	do
	{
		printf("1.Create stack\n2.Push\n3.Pop\n4.Top\n5.Is empty\n6.Make empty\n7.Display\n8.Exit:\t");
		scanf("%d",&option);
		switch(option)
		{
		case 1:
			head=createstack();
			break;
		case 2:
			printf("Enter number to add\n");
			scanf("%d",&num);
			push(head,num);
			break;
		case 3:
			pop(head);
			break;
		case 4:
			printf("%d",top(head));	 
			break;
		case 5:
			if(isempty(head)==1)
				printf("The stack is empty\n");
			else
				printf("Stack is not empty\n");			 
			break;
		case 6:
			makeempty(head);		 
			break;
		case 7:
			display(head);			 
			break;
		case 8:
			exit(0);
		}
	}
	while(1);
	return 0;
}
