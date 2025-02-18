#include<stdio.h>
struct stdu
{
    int rollno;
    char section;
    char name[20];

};
int main()
{
    struct stdu s1,s2;

    printf("Enter the student roll no:\n");
    scanf("%d",&s1.rollno);
    printf("roll no:%d\n",s1.rollno);
     printf("Enter the student section:\n");
    scanf(" %c",&s1.section);
    printf("section:%c\n",s1.section);
    printf("Enter the student name:\n");
    scanf("%s",s1.name);
    printf("name:%s\n",s1.name);

    printf("Enter the student roll no:\n");
    scanf("%d",&s2.rollno);
    printf("roll no:%d\n",s2.rollno);
     printf("Enter the student section:\n");
    scanf(" %c",&s2.section);
    printf("section:%c\n",s2.section);
    printf("Enter the student name:\n");
    scanf("%s",s2.name);
    printf("name:%s\n",s2.name);

}
