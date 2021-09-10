#include<stdio.h>
#define num 2
#define no 2
void main()
{
   int a[num][no],b[num][no],c[num][no],i,j,k;
   printf("Enter the first matrix:-");//first matrix start//
   for ( i=0;i<num; i++)
      {
          for ( j=0;j<no;j++)
          {
               printf("a=[%d][%d]:-",i,j);
               scanf("%d",&a[i][j]);    
          }
      }
      printf("\nEnter the second matrix:-");
       for ( i=0;i<num; i++)
      {
          for ( j=0;j<no;j++)
          {
           printf("b=[%d][%d]:-",i,j);
               scanf("%d",&b[i][j]);
          }
      }
   for ( i=0;i<num;i++)
   {
       for ( j=0;j<no;j++)
       {
             printf("\t[%d]",a[i][j]);
       }
       printf("\n");
   }//first matrix end//
   printf("\n");//second matrix start//
   for ( i=0;i<num;i++)
   {
       for ( j=0;j<no;j++)
       {
             printf("\t[%d]",b[i][j]);
       }
       printf("\n");
   }//second matrix end//
   printf("\n");
   printf("sum of matrix:-");
   printf("\n");
        for ( i=0;i<num;i++)
         {
           for( j=0;j<no;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                printf("\t[%d]",c[i][j]);
            }
            printf("\n");
         }
   printf("\n");
   printf("substraction of matrix:-");
   printf("\n");
        for ( i=0;i<num;i++)
         {
           for( j=0;j<no;j++)
            {
                c[i][j]=a[i][j]-b[i][j];
                printf("\t[%d]",c[i][j]);
            }
            printf("\n");
         }
   printf("\n");
   printf("multiplication of matrix:-");
    printf("\n");
   for(k=0;k<num;k++)
   {
        for ( i=0;i<num;i++)
         {
             c[k][i]=0;
           for( j=0;j<no;j++)
            {
                // printf("\t[%d][%d] a=[%d]",k,j,a[k][j]);
                // printf("\t[%d][%d] b=[%d]",j,i,b[j][i]);
                c[k][i]+=a[k][j]*b[j][i];              
                // printf("\t[%d]",c[k][i]); 
            }
           printf("\t[%d]",c[k][i]); 
         }
        printf("\n");
   }
}   
