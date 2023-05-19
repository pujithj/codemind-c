#include<stdio.h>
int main()
{
   int a[100], n, element, pos=0;
   int i;

   
   scanf("%d", &n);

   
   for(i=0; i<n; i++)scanf("%d", &a[i]);

   
   scanf("%d",&element);

   for(i=0; i<n; i++)
   {
     if(a[i]==element)
     {
       printf("True", element, i+1);
       return 0;
     }
   }

   printf("False", element);
   return 0;
}