#include<stdio.h>
int main()
{
      char name[100];
     char father_name[100];
    char address[200];
    char course[100];
    char reg_no[50];
    char email[100];
    long long int contact_number;
     int tenth_marks;
    int twelfth_marks;
    float cutoff;
    char certificates[300];
    char skills[300];

printf("***********BIO-DATA**********");
    printf("\n Enter your name:");
    scanf(" %[^\n]", name);
    getchar();

    printf("Enter your father's name:");
    scanf("%s",father_name);
getchar();

    printf("Enter your course: ");
    scanf(" %s",course);
getchar();

    printf("Enter your email id:");
    scanf(" %s", email);
    getchar();


     printf("Enter your registration number: ");
    scanf(" %s", reg_no);
getchar();


    printf("Enter your contact number: ");
    scanf(" %lld",&contact_number);
getchar();

    printf("Enter your 10th marks: ");
    scanf("%d", &tenth_marks);
getchar();

    printf("Enter your 12th marks: ");
    scanf("%d", &twelfth_marks);
getchar();

    printf("Enter your cutoff: ");
    scanf("%f", &cutoff);
    getchar();


    printf("Enter any certificates : ");
    scanf(" %[^\n]", certificates);
    getchar();


    printf("Enter your skills: ");
    scanf(" %s", skills);
    getchar();


    printf("Enter your address: ");
    scanf(" %[^\n]", address);
    getchar();


   //display the biodata
    printf("\n--- Biodata ---\n");
    printf("Name: %s\n", name);
    printf("Father's name:%s\n",father_name);
    printf("Address: %s\n",address);
    printf("Course: %s\n", course);
    printf("Registration Number: %s\n",reg_no);
    printf("Email ID: %s\n",email);
    printf("Contact Number: %lld\n",contact_number);
    printf("10th Marks: %d\n", tenth_marks);
    printf("12th Marks: %d\n", twelfth_marks);
    printf("Cutoff: %.1f\n",cutoff);
    printf("Certificates: %s\n",certificates);
    printf("Skills: %s\n", skills);

    return 0;
}
