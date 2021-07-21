#include<stdio.h>
void main()
{
    int num,ans=1,n=1,n1=-1,i=0;
    printf("Enter the  number:-");
    scanf("%d",&num);
    while(num>=i)
     {
        ans=ans+n1;
        n1=n;
        n=ans;
        printf("\n%d",ans);
        i++;
    }
}