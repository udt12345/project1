// #include<stdio.h>
// void main()
// {
//     int no,r,i,sum=0;
//     printf("Enter the number:-");
//     scanf("%d",&no);   
//     while(no>0)
//     {
//         r=no%2;
//         no=no/2;
//         
//         printf("%d",r);
//     }
//    //printf("%d",sum);
//    // printf("%d",r);
// }

#include<stdio.h>
int bin(int );
int main()
{
    int no,r,i,sum=0;
    printf("Enter the number:-");
    scanf("%d",&no);   
    bin(no);   
}
int bin(int n)
{
        int r;
        r=n%2;
        n=n/2;
        if(n==0)
        {
            printf("%d",r);
        }
        else
        {
          bin(n);
          printf("%d",r);  
        }
       
}

