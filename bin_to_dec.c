// #include<stdio.h>
// void main()
// {
//     int num,r=1,i,s=1,r1=2;
//     printf("Enter the binary number:-");
//     scanf("%d",&num);
//     for ( i = 0; i <=num; i++)
//     {
//         r=r*s;
//         s=r1;
//         printf("\n%d=%d",r,i);

//     }
//             // printf("%d",r);
// }
#include<stdio.h>
void main()
{
    int num,rem;
    int r=1,i,s=1,r1=2,sum=0;    //those variables who  have any values//
    printf("Enter the binary number:-");
    scanf("%d",&num);
    // for ( i = 0; i <=num; i++)
    // {
        while(num>0)
        {
           r=r*s;
           s=r1;
           rem=num%10*r;
           num=num/10;
           sum=sum+rem;
        }
          printf("%d",sum);

        // r=r*s;
        // s=r1;
        // printf("\n%d=%d",r,i);
   // }
}