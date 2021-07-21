#include<stdio.h>
void main()
{
   int no,r,n,sum=0,no1;
   printf("Enter the number :-");
   scanf("%d",&no);
   no1=no;
   while (no>0)
   {
       r=no%10;
       n=r*r*r;
       sum=sum+n;
       no=no/10;
   }
       printf("%d",sum);
       if (no1==sum)
       {
           printf("\nNumber is armstrong");
       }
      else
      {
          printf("\nnumber is not armstrong ");
      } 
}