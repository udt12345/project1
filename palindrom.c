#include<stdio.h>
void main()
{
    int no,sum=0,r,no1;
    printf("Enter the number:-");
    scanf("%d",&no);
    no1=no;
    while(no>0)
     {
         r=no%10;
         no=no/10;
         sum=sum*10+r;
     }
     printf("%d",sum);
     if (no1==sum)
     {
         printf("\nnumber is a palindrom number ");
     }
     else
     {
         printf("\nnumber is not a palindrom number ");
     }
     
}