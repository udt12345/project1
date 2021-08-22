

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

