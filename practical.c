#include <stdio.h>
int main()
{
    int num, temp, rev= 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0)

      {
        rem = num % 10;
        rev += rem * rem * rem;
        num /= 10;
       }

    if (rev == temp)
        {
        printf("%d is an Armstrong number.\n", temp);
        }
    else
        {
        printf("%d is not an Armstrong number.\n", temp);
        }

    return 0;
}
