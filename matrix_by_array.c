                                //simple matrix code//
// #include<stdio.h>
// #define num 2
// #define no 4
// void main()
// {
//    int a[num][no], i,j;
//    printf("Enter the no:-");
//    for ( i=0;i<num; i++)
//       {
//           for ( j=0;j<no;j++)
//           {
//                printf("[%d][%d]:-",i,j);
//                scanf("%d",&a[i][j]);
//           }
//       }
//    for ( i=0;i<num;i++)
//    {
//        for ( j=0;j<no;j++)
//        {
//              printf("\t[%d]",a[i][j]);
//        }
       
//      printf("\n");
//       // printf("\n%d",a[j]);
//    }
// }




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



// #include<stdio.h>
// #define num 2
// #define no 2
// int matrix1();
// int matrix2();
// int sum();
// int main()
// {
//    int a[num][no],b[num][no];
//    matrix1(&a[num][no]);
//    matrix2(&b[num][no]);
// }   
// int  matrix1(int a[num][no])
// {
//      int i,j;
//        for ( i=0;i<num; i++)
//       {
//           for ( j=0;j<no;j++)
//           {
//                printf("a=[%d][%d]:-",i,j);
//                scanf("%d",&a[i][j]);
//           }
//       }
//     for ( i=0;i<num;i++)
//    {
//        for ( j=0;j<no;j++)
//        {
//              printf("\t[%d]",a[i][j]);
//              //sum(a[i][j]);
//        }
//      printf("\n");
//    }//first matrix end//
// }   
// int matrix2(int b[num][no])
// {
//     int k,l;
//       for ( k=0;k<num; k++)
//       {
//           for ( l=0;l<no;l++)
//           {
//                printf("b=[%d][%d]:-",k,l);
//                scanf("%d",&b[k][l]);
//           }
//       }
//    for ( k=0;k<num;k++)
//    {
//        for ( l=0;l<no;l++)
//        {
//              printf("\t[%d]",b[k][l]);
//              //sum(b[k][l]);
//        }
//        printf("\n");
//    }//second matrix end//
// }   
// //int sum(int a[num][no],int b[num][no])
//{   
//}