#include<stdio.h>
void main()
{
	int i,j,k,r1,r2,c1,c2,a[10][10],b[10][10],c[10][10]={0},d;
	printf("Enter number of rows and coulumns");
	scanf("%d%d",&r1,&c1);
	printf("Enter the values");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);
	}	
	printf("Enter number of rows and coulumns");
	scanf("%d%d",&r2,&c2);
	printf("Enter the values");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
			scanf("%d",&b[i][j]);	
	}	
	printf("Enter option: \n1 for addition \n2 for subrtaction \n3 for Multiplication ");
	scanf("%d",&d);	
	switch(d)
	{
	case 1:
		if(r1==r2&&c1==c2)
		{
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					c[i][j]=a[i][j]+b[i][j];
					printf("%d\t",c[i][j]);
				}
				printf("\n");
			}	
		}
		else
			printf("Matrix not acompatible");
		break;	
	case 2:
		if(r1==r2&&c1==c2)
		{
			for(i=0;i<r1;i++)
		
			{	for(j=0;j<c1;j++)
				{
					c[i][j]=a[i][j]-b[i][j];
					printf("%d\t",c[i][j]);
				}
				printf("\n");
			}
		}
		else
			printf("Matrix not acompatible");
		break;
	case 3:
		if(c1==r2)
		{
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{				
					for(k=0;k<r1;k++)	
					{
						c[i][j]=c[i][j]+a[j][k]*b[k][i];
					}
					printf("%d\t",c[i][j]);
				}
				printf("\n");
			}			
		}	
	else
		printf("Matrix not compatible");
	break;
	}
}
		
	
	
