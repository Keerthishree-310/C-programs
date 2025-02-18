#include<stdio.h>
int main()
{
    int i,j,temp,minindex;
    int arr[5]={19,23,42,21,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<n;i++)
    {
        minindex=i;
    for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        if(minindex!=i)
        {
            temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
