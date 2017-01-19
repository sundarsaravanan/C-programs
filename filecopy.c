#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
    char ch;
    if(argc!=3)
    {
        printf("Conflicting number of arguments\n");
        exit(1);
    }
    FILE *fp,*fc;
    fp=fopen(argv[2],"r");
    if(fp==NULL)
    {
        printf("Error opening the file\n");
        exit(1);
    }
    fc=fopen(argv[1],"w");
    if(fc==NULL)
    {
            printf("Error opening the file\n");
            fclose(fp);
            exit(1);
    }
    while((ch=fgetc(fp))!=EOF)
    {
        fputc(ch,fc);
	printf("%c",ch);
    }
    fclose(fp);
    fclose(fc);
}
