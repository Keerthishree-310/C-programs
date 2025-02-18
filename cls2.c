# include<stdio.h>
int main()
{
    int i,j;
    int mark[6];
    for(i=0;i<6;i++)
    {
        scanf("%d",&mark[i]);
    }
    for(i=0;i<6;i++)
    {
      printf("%d\t",mark[i]);
    }
    return 0;
}
