/*#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter the number of rows and column:");
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c],s[r][c];

    printf("\n enter elements of 1st matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
     printf("\n enter elements of 2nd matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        scanf("%d",&b[i][j]);
    }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nSum of two matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter the number of rows and column:");
    scanf("%d %d",&r,&c);
    int a[r][c],T[r][c];

    printf("\n enter elements of  matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        printf("%d",a[i][j]);
    }
    printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         T[j][i]=a[i][j];
        }
    }
    printf("\nTRANSPOSE OF THE MATRIX:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d",T[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/



/*#include<stdio.h>
int main()
{
    int array[8]={2,4,3,5,2,1,6,8};
    int target=1;
    int result=-1,i;
    int n=sizeof(array)/sizeof(array[0]);
    for(i=0;i<n;i++)
    {
        if(target==array[i])
        {
            result=i;
            break;
        }
    }
    (result==-1)?printf("element not found"):
        printf("element found at %d is %d",i+1,array[i]);
}
*/



#include<stdio.h>
int main()
{
    int size,i,target,e=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
     int a[size];
    printf("enter the elements in the array:");
    for(i=0;i<size;i++)
    {
        scanf("%d\n",&a[i]);
    }
    printf("Enter the target number:");
    scanf("%d",&target);
    for(i=0;i<size;i++)
    {
        if(target==a[i])
        {
           e=1;
           break;
        }

    }
    if(e==1)
    {
        printf("element found");
    }
    else
        {
            printf("element not found");
        }
    return 0;
}
