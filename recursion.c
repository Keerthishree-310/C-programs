#include<stdio.h>
int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
    int a,fact;
    printf("enter the value:");
    scanf("%d",&a);
    fact=factorial(a);
    printf("The factorial of %d = %d",a,fact);
    return 0;
}
