//Q)10.write a program to reverse a given numbers
#include<stdio.h>
int main()
{   
    int n,reverse=0,remainder;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("n=%d\n",n);
    while(n!=0)
    {  
      remainder=n%10;
      n=n/10;
      reverse=reverse*10+remainder;  
    }
    printf("given number reverse is %d",reverse);
    return 0;
}