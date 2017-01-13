#include<stdio.h>
void main()
{
	int arr[25], no,key,flag=0,i,temp;
	printf("Enter the no. of elements");
	scanf("%d",&no);
	temp=no;
	printf("Ente elements in ascending order\t");
	for(i=0;i<no;i++)
		scanf("%d",&arr[i]);
	printf("Enter the key to search\n");
	scanf("%d",&key);
	temp=no/2;
	while(1)
	{
		
		if(key==arr[temp])
		{
			flag=1;
			break;		
		}
		if(temp==0)
			break;
		if(key>arr[temp])
		{
			temp=no*3/4;
			no/=2;
		}
		else
		{
			temp=temp/2;	
			no/=2;
		}
	}
	if(flag)
		printf("%d is found ",key);
	else
		printf("%d is not found",key);
}
