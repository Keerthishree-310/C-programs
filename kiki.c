#include<stdio.h>
int main()
{
    char a[50];
    printf("Enter a word:\n");
    scanf("%s",a);
    //to find the string length
    int len=0;
    while(a[len]!='/0')
    {
        len++;
    }
    printf("String Length = %d\n",len);
    //to copy a string
    char b[100];
    b==a;
    printf("copied string:%s\n",b);

}
