#include <stdio.h>
#include <string.h>
	struct student
	{
		char name[25];
		int m1,m2,m3,roll,tot;
		float avg;
	};
	void main()
	{
	FILE *f;
	int n,i;
	struct student stu[100];
	f=fopen("student.txt","w");
	printf("Enter number of students:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter the student name\n");
	scanf("%s",stu[i].name);
	printf("Enter the student roll no.\n");
	scanf("%d",&stu[i].roll);
	printf("Enter the computer mark\n");
	scanf("%d",&stu[i].m1);
 	printf("Enter the maths mark\n");
	scanf("%d",&stu[i].m2);
	printf("Enter the chemistry mark\n");
	scanf("%d",&stu[i].m3);
	fprintf(f,"%s %d %d %d %d",stu[i].name,stu[i].roll,stu[i].m1,stu[i].m2,stu[i].m3);
	}
	fclose(f);
	f=fopen("student.txt","a");	
	for(i=0;i<n;i++)
	{
	fscanf(f,"%s %d %d %d %d",stu[i].name,stu[i].roll,stu[i].m1,stu[i].m2,stu[i].m3);
	stu[i].tot=stu[i].m1+stu[i].m2+stu[i].m3;
 	stu[i].avg=stu[i].tot/3.0;
	fprintf(f,"%d %f",stu[i].tot,stu[i].avg);
	printf("Student Name:\t %s\n",stu[i].name);
	printf("Roll No.\t %d\n",stu[i].roll);
	printf("Computer\t%d\n",stu[i].m1);
	printf("Maths\t%d\n",stu[i].m2);
	printf("Chemistry \t%d\n",stu[i].m3);
	printf("Total\t%d\n",stu[i].tot);
	printf("Average\t%f\n",stu[i].avg);
	}
}

