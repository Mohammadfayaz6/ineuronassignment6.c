//Q)7.write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int n,i,sum,count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n!=0)
    {
      n=n/10;
      count++;
    }
      printf("the sum of digit is %d",count);
    return 0;
}