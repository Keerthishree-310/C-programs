/*#include<stdio.h>
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("Enter value for a and b:\n");
    scanf("%d %d",&a,&b);
    printf("a and b before swaping:%d\t %d\n",a,b);
    swap(&a,&b);
    printf("Values after swaping:%d\t%d\n",a,b);
return 0;
}

*/
#include<stdio.h>
int main()
{

    int a;
    printf("Enter a value for a:");
    scanf("%d",&a);
    int *ptr;
    ptr=&a;
    printf("%d\n",a);
    printf("%u\n",&a);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);
    printf("%d\n",*ptr);
    printf("%d\n",*(&a));
    int **ptr1;
    ptr1=&ptr;
    printf("%d\n",ptr1);
    printf("%d\n",*ptr1);

    return 0;
 }
