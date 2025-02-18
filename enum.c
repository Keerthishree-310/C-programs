#include<stdio.h>
int main()
{
enum week{mon,tue,wed,thur,fri,sat,sun};
enum week day=fri;
printf("%d",day);
day=sun;
printf("%d",day);
return 0;
}
