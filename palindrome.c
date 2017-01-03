#include<stdio.h>
#include<string.h>
void main()
{
	int l,i,flag=1,j;
	char str[50];
	printf("Enter the word");
	scanf("%s",str);
	l=strlen(str);
	for (i=0,j=l-1;i<l/2;i++,j--)
	{
		if(str[i]==str[j])
                continue;
          else
                flag=0;
                 break;
			
	}	
	
	if(flag)
		printf("%s is a palindrome",str);
	else
	printf("%s is not a palindrome",str);
}
