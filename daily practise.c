#include<stdio.h>
int main()
{
    int a=56;
    printf("%d\n",a++);
    printf("%d\n",a);
    printf("%d\n",++a);
    printf("%d\n",a--);
    printf("%d\n",--a);
    int b=78;
    printf("%d\n",a+=b);
    printf("%d\n",a-=b);
    printf("%d\n",a*=b);
    printf("%d\n",a/=b);
    printf("%d\n",a%=b);

    printf("%d\n",a==b);
    printf("%d\n",a<b);
    printf("%d\n",a>b);
    printf("%d\n",a<=b);
    printf("%d\n",a>=b);
    printf("%d\n",a!=b);
    return 0;
}
