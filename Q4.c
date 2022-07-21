//Q)4.write a program to calculate sum of squares of  first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0,j;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("sum of square of first N natural number is");
    for(i=1;i<=n;i++)
    {   
        j=i*i;
        sum=sum+j;
        
    }
       printf("\n%d",sum);
    
    return 0;
}