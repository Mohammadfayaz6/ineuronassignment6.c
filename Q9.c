//Q)9.write a program to calculate lcm of two  numbers
#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
      if(i%a==0 && i%b==0)
      {
        break; 
      }  
    }
       printf("Lcm of %d and %d is %d",a,b,i);
    return 0;
}