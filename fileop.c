#include<stdio.h>
#include<string.h>
struct stud
{
	int rollno,m1,m2,m3,tot;
	char name[25];
	float avg;
}s[50];
void main()
{
	FILE *fp;
	int n,i;
	fp=fopen("student.txt","w");
	printf("\nENter the no. of students\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the name\n");
		scanf("%s",s[i].name);
		printf("\nEnter the roll no\n");
		scanf("%d",&s[i].rollno);
		printf("\nEnter the marks in 3 sub\n");
		scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
		fprintf(fp,"%s %d %d %d %d\n",s[i].name,s[i].rollno,s[i].m1,s[i].m2,s[i].m3);
	}
	fclose(fp);
	fp=fopen("student.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%s %d %d %d %d\n",s[i].name,&s[i].rollno,&s[i].m1,&s[i].m2,&s[i].m3);
		printf("\nName    	 : %s",s[i].name);
		printf("\nRoll No          : %d",s[i].rollno);
		printf("\nMarks in 3 sub   : %d %d %d",s[i].m1,s[i].m2,s[i].m3);
	}
	fclose(fp);
	fp=fopen("student.txt","a");
	for(i=0;i<n;i++)
	{
		s[i].tot=s[i].m1+s[i].m2+s[i].m3;
		s[i].avg=s[i].tot/3.0;
		fprintf(fp,"%d %f",s[i].tot,s[i].avg);
		printf("\nTotal of %s	 : %d",s[i].name,s[i].tot);
		printf("\nAverage of %s   : %f",s[i].name,s[i].avg);
	}
}
 


