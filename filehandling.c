#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE  *fptr;
    fptr=fopen("file.txt","r");
   // fprintf(fptr,"  thank you");
   char name[50];
   fgets(name,50,fptr);
   printf("%s",name);
    fclose(fptr);
    return 0;
}
