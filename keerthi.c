# include<stdio.h>
int main()
{
    char s[56];
    printf("Name");
    scanf("%[^\n]",s);
    char c[9];
    printf("reg no");
    scanf("%s",&s);
    int d;
    printf("10th mark");
    scanf("%d",&d);
    return (0);
}
