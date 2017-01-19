#include<stdio.h>
#include<string.h>
void main()
{
FILE *fp;
char ch,s[150];
int nol=1,not=0,nob=0,noc=0;
fp=fopen("word.txt","w");
printf("\nEnter the sentence\n");
gets(s);
fprintf(fp,"%s",s);
fclose(fp);
fp=fopen("word.txt","r");
while(1)
{
ch=fgetc(fp);
if(ch==EOF)
break;
noc++;
if(ch==' ')
nob++;
if(ch=='\n')
nol++;
if(ch=='\t')
not++;
}
fclose(fp);
printf("\nNumber of characters:%d",noc-nob);
printf("\nNumber of blank spaces:%d",nob);
printf("\nNumber of lines:%d",nol);
printf("\nNumber of tabs:%d",not);
printf("\nNumber of words:%d",nob+1);
}

