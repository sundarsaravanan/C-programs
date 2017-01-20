#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
static int count;
void insert(struct node *temp,int num, int pos);
void display(struct node *temp);
void insertlast(struct node *temp,int num);
void deletedata(struct node *temp,int pos);
void insertfirst(struct node *temp, int num);
void find(struct node *temp,int num);
void findnext(struct node *temp,int pos);
void findprevious(struct node *temp,int pos);
void islast(struct node *temp,int num);
void isfirst(struct node *temp,int num);
void makeempty(struct node *temp,struct node *tail);
int main()
{
	int opt,num,pos;
	struct node *head;
	struct node *tail;
	tail = malloc(sizeof(struct node));
	head=malloc(sizeof(struct node));
	head->next = tail;
	tail->next=NULL;
	do
	{
		printf("\nEnter the option!\n1.Insert data\n2.Display data\n3.Insert data at last\n4.Insert data at first\n5.Delete data\n6.Find\n7.Find next element\n8.Find previous element\n9.Find the number is last\n10.Find the number is first \n11.Make empty");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("Enter the number and postition\n");
				scanf("%d%d",&num,&pos);
				insert(head,num,pos);
				break;
			case 2:
				display(head);
				break;
			case 3:
				printf("Enter number\n");
				scanf("%d",&num);
				insertlast(head,num);
				break;
			case 4:
				printf("Enter number to insert at first\n");
				scanf("%d",num);
				insertfirst(head,num);
				break;
			case 5 :
				printf("Enter position to delete\n");
				scanf("%d",&pos);
				deletedata(head, pos);
				break;
			case 6:
				printf("Enter Number to find");
				scanf("%d",&num);
				find(head,num);
				break;
			case 7:
				printf("Enter Number\n");
				scanf("%d",&pos);
				findnext(head,pos);
				break;
			case 8:
				printf("Enter position \n");
				scanf("%d",&pos);
				findprevious(head,pos);
				break;
			case 9:
				printf("Enter number");
				scanf("%d",&num);
				islast(head,num);
				break;
			case 10:
				printf("Enter number");
				scanf("%d",&num);
				isfirst(head,num);
				break;
			case 11:
				makeempty(head,tail);
				break;
			case 12 :
				exit(0);	
		}
	}while(1); 	
	return 0;
}
void insert(struct node *temp, int num, int pos)
{
	int i;
	count++;
	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	if(newnode!=NULL)
	{
		for(i=1;i<pos;i++)
		{
			temp=temp->next;
			
		}
		newnode->data=num;
		newnode->next=temp->next;
		temp->next=newnode;
		
		
	}
	else
	{
	printf("memory allocation failed");
	exit(1);
	}	
	
}
void display(struct node *temp)
{
	while(temp->next->next!=0)
	{
		printf("%d\n",(temp->next->data));
		temp=temp->next;
	}	
}
void insertlast(struct node *temp,int num)
{
	int i;
	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	for(i=0;i<count;i++)
	{
		temp=temp->next;
			
	}
	newnode->data=num;
	newnode->next=temp->next;
	temp->next=newnode;
}
void insertfirst(struct node *temp, int num)
{
	int i;
	count++;
	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	if(newnode!=NULL)
	{
	
		newnode->data=num;
		newnode->next=temp->next;
		temp->next=newnode;
	}
	else
	{
	printf("memory allocation failed");
	exit(1);
	}	
	
}
void deletedata(struct node *temp,int pos)
{
	int i;
	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	
	for(i=1;i<pos;i++)
	{
		temp=temp->next;
	}
	newnode=temp->next;
	temp->next=(temp->next)->next;
	free(newnode);
	count--;
}
void find(struct node *temp,int num)
{
	int i=0,flag=0;
	while(temp->next!=NULL)
	{
		i++;
		temp=temp->next;
		if(temp->data==num)
		{
			flag=1;
			break;
		}
		
	}
	if(flag)
	{
		printf("%d is found at position %d",num,i);
	}
	else
	printf("%d is not found",num);
}
void findnext(struct node *temp, int pos)
{
	int i;
	for(i=1;i<=pos;i++)
		temp=temp->next;
	printf("%d is the next element of position %d",temp->next->data,pos);
}
void findprevious(struct node *temp, int pos)
{
	int i;
	for(i=1;i<pos;i++)
		temp=temp->next;
	printf("%d is the previous element of position %d",temp->data,pos);
}
void islast(struct node *temp,int num)
{
	
	for(;temp->next->next!=NULL;temp=temp->next);
	if(temp->data==num)
		printf("%d is the last number\n");
	else
		printf("%d is not the last number\n");

}
void isfirst(struct node *temp,int num)
{
	if(temp->next->data==num)
		printf("%d is the first number\n");
	else
		printf("%d is not the first number\n");
}
void makeempty(struct node *temp,struct node *tail)
{
	temp->next=tail;
}
