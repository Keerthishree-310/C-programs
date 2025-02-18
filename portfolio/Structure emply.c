#include<stdio.h>
struct emply
{
    char name[30];
    int id;
    long int salary;
}E1,E2;
int main()
{
    int i;
    printf("Enter your name:\n");
    scanf("%s",&E1.name);
    printf("%s\n",E1.name);
    printf("Enter your id:\n");
    scanf("%d",&E1.id);
    printf("%d\n",E1.id);
    printf("Enter your salary:\n");
    scanf("%ld",&E1.salary);
    printf("%ld\n",E1.salary);

    for(i=0;i<5;i++)
    {
        printf("Enter name for employe:\n");
        scanf("%s\n",&E2.name);
        printf("name=%s",E2.name);
    }


    for(i=0;i<5;i++)
    {
        printf("Enter  id for empolye:\n");
        scanf(" %d\n",&E2.id);
        printf("ID=%d",E2.id);
    }


    for(i=0;i<5;i++)
    {
        printf("Enter salary for empolye:\n");
        scanf(" %ld\n",&E2.salary);
        printf("%ld",E2.salary);
    }

}
