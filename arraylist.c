#include<stdio.h>
#include<stdlib.h>
void insert(int *,int pos, int num);
void del(int *,int);
void reverse(int *);
void search(int *, int num);
void display(int *);
static int total=0;
void main()
{
	int arr[100],option,num,pos;
	do
	{	
	printf("\nEnter options");
	printf("\n1.Insert\n2.Delete\n3.Reverse\n4.Search\n5.Display\n6.Exit\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			printf("Enter number and posistion\n");
			scanf("%d%d",&num,&pos);
			pos=pos-1;
			insert(arr,pos,num);
			break;
		case 2:
			printf("Enter position to delete\n");
			scanf("%d",&pos);
			del(arr,pos);
			break;
		case 3:
			reverse(arr);
			break;
		case 4:
			printf("Enter number to search\n");
			scanf("%d",&num);
			search(arr,num);
			break;
		case 5:
			display(arr);
			break;
		case 6:
			exit(0);
		case 7:
			printf("\n%d",total);
		default:
			printf("Invalid option\n");		
	}		
	}while(1);
}

void insert(int *arr,int pos, int num)
{
	
	int i;
	for(i=total;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=num;
	total++;
}
void del(int *arr, int pos)
{
	int i;
	for(i=pos;i<total;i++)
	{
		arr[i]=arr[i+1];
	}
	total--;
}
void reverse(int *arr)
{
	int i,j,temp;
	for(i=0,j=total-1;i<(total/2);i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	display(arr);
}
void search(int *arr,int num)
{
	int i;
	for(i=0;i<total;i++)
	{
		if(num==arr[i])
		{
			printf("%d is found at pos %d",num,i+1);
			break;
		}
	}
}
void display(int *arr)
{
	int i;
	for(i=0;i<total;i++)
	{
		printf(" %d,",arr[i]);
	}
}
