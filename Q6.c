//Q)6.write a program to calculate factorial of a number
#include<stdio.h>
int main()
{  
    int n,i,fact=1;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
       fact=fact*i;
     }
      
      printf("factorial of %d is %d",n,fact);
    return 0;
}