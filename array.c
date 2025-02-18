/*#include<stdio.h>
int main()
{
    int i;
    int a[5]={5,4,3,2,1};
 for(i=4;i>=0;i--)
{
    printf("%d\n",a[i]);
}

return 0;

}*/





/*#include<stdio.h>
int main()//2 d array
{
    int i,j;
    int num [2][3];
    printf(" enter arrey elements:");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&num[i][j]);

        }
    }
    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",num[i][j]);
        }
        printf("\n");

    }


     return 0;

}*/




/*#include<stdio.h>
int main()//largest number
{
int a[3];
int i,j;
printf("Enter 3 values:");
for(i=0;i<3;i++)
{
    scanf("%d",&a[i]);
}
int largest=a[0];
for(j=0;j<3;j++)
{
    if(a[j]>largest)
    {
        largest=a[j];
    }
}
 printf("The largest value:%d",largest);
 return 0;
}*/




#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d\n",sum);
    printf("%d",sum/n);
    return 0;
}
