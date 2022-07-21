//Q)3.write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("sum of N odd natural number is");
    for(i=1;i<=n;i+=2)
    {
        sum=sum+i;
    }
    printf("\n%d",sum);
    return 0;
}