#include<stdio.h>
#include<stdlib.h>
#define MAX 5
static int top=-1;
typedef int* stack;
void push(stack s,int num);
void pop();
int isfull();
int isempty();
void topelement(stack s);
void display(stack s);
int main()
{
	int arr[MAX],num,option;
	do
	{
		printf("1.Push\n2.Pop\n3.Is Full\n4.Is empty\n5.Top element\n6.Display all\n7.Exit\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("Enter number to insert\n");
				scanf("%d",&num);
				push(arr,num);
				break;
			case 2:
				pop();
				break;
			case 3:
				if(isfull()==1)
					printf("Stack is full\n");
				else
					printf("Stack is not full\n");
				break;
			case 4:
				if(isempty()==1)
					printf("Stack is empty\n");
				else
					printf("Stack is not empty");
				break;
			case 5:
				topelement(arr);
				break;
			case 6:
				display(arr);
				break;
			case 7:
				exit(0);
		}
	}
	while(1);
	return 0;
}
void push(stack s,int num)
{
	if(isfull()!=1)
	{
		top=top+1;
		s[top]=num;
	}
	else
		printf("Stack overflow!\n");
}
void pop()
{
	if(isempty()!=1)
		top--;
	else
		printf("Stack underflow!\n");
}
int isfull()
{
	if(top==(MAX-1))
		return 1;
	else
		return 0;
}
int isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
void topelement(stack s)
{
	if(isempty()!=1)
		printf("%d\n",s[top]);
	else
		printf("Stack is empty\n");
}
void display(stack s)
{
	int temp=0;
	if(top>=0)
	{
		while(temp<=top)
		{
			printf("%d\n",s[temp]);
			temp++;
		}
	}
	else
		printf("Stack is empty!\n");
}
