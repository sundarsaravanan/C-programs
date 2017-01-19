#include <stdio.h>
#include<math.h>
void main()
{
   int a[100], b, i, n;
 
   printf("Enter the number of elements in array\n");
   scanf("%d",&n);
 
   printf("Enter %d integer(s)\n", n);
 
   for (i = 0; i < n; i++)
      scanf("%d",&a[i]);
 
   printf("Enter the number to search\n");
   scanf("%d", &b);
 
   for (i = 0; i < n; i++)
   {
      if (a[i] == b)  
      {
         printf("%d is present at location %d.\n", b, i+1);
         break;
      }
   }
   if (i == n)
      printf("%d is not present in array.\n", b);
}
