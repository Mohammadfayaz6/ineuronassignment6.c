//Q)2.write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("sum of N even natural number is");
    for(i=2;i<=n;i+=2)
    {
        sum=sum+i;
    }
    printf("\n%d",sum);
    return 0;
}