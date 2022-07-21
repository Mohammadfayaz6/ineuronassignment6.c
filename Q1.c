//Q)1.write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("sum of N natural number is");
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("\n%d",sum);
    return 0;
}