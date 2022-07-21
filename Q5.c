//Q)5.write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0,j;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("sum of cubes of first N natural number is");
    for(i=1;i<=n;i++)
    {   
        j=i*i*i;
        sum=sum+j;
        
    }
       printf("\n%d",sum);
    
    return 0;
}