#include<stdio.h>
int main()
{
    printf("\nname:");
    char n[20];
    scanf("%s",n);
    getchar();

    printf("\nfather's name:");
    char f [20];
    scanf("%s",f);
    getchar();

    printf("\ndate of birth:");
    long int d;
    scanf("%d",&d);
    getchar();

    printf("\ngender(F/M):");
    char g;
    scanf("%c",&g);
    getchar();

    printf("\nblood group:");
    char b;
    scanf("%c",&b);
    getchar();

    printf("\naddress:");
    char a[70];
    scanf("%s[^\n]",a);
    getchar();

    printf("\nregister number:");
    char r[30];
    scanf("%s",r);
    getchar();

    printf("\ncourse");
    char c[20];
    scanf("%s",c);
getchar();

    printf("\n10th mark");
    int m1;
    scanf("%d",&m1);
getchar();

    printf("\n12th mark");
    int m2;
    scanf("%d",&m2);
getchar();

    printf("\ncutoff:");
    int s;
    scanf("%d",&s);
getchar();

    printf("\nskills:");
    char y[30];
    scanf("%s",y);
getchar();

    printf("\nceritificates:");
    char z[20];
    scanf("%s",z);
getchar();

    printf("\ncontact number:");
    long long int p;
    scanf("%lld",&p);
getchar();

    printf("\ne-mail:");
    char e[20];
    scanf("%s",e);
getchar();

    return(0);


    }
