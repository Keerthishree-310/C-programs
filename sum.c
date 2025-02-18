#include<stdio.h>
int main()
{
    int a,b,c,d,g,h,r;
     printf("enter the value for a");
     scanf("%d",&a);
     printf("enter the value for b");
     scanf("%d",&b);
    c=a+b;
    printf("the sum=%d\n",c);
    d=a-b;
    printf("difference=%d\n",d);
    g=a*b;
    printf("product=%d\n",g);
    h=a/b;
    printf("quoitent=%d\n",h);
    r=a%b;
    printf("remainder=%d",r);
    return(0);
}

