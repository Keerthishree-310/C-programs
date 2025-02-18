/*#include<stdio.h>
int main()
{
int a,b,c,d,e;
a=4;
b=3;
c=2;
d=5;1==4>=11!=5
e=6;
printf("%d\n",a>b>c);
printf("%d\n",c+b>a+d);
printf("%d\n",e>b+c<d);2>8<5
return 0;
}*/

/*#include<stdio.h>   int a,b,c;
    a=0;
    b=8;
    c=10;
int main()
{
int a,b,c,d,e;
a=2;
b=3;
c=5;  10 && 8 ,0 && 8,0 && 0, 8 && 0.
d=8;
e=25;
printf("%d",c+b*c>=e%a<=d==c-b*a>=d+b!=c);
return 0;
}*/

/*#include<stdio.h>
int main()
{
    printf("%d\n",10&&8);
    printf("%D\n",0&&8);
    return 0;  ! -8, ! 100 ,! 0,! 0.0
}*/

/*#include<stdio.h>
int main()
{
  printf("%d\n",!-8);
  printf("%d\n",!100);
  printf("%d\n",!0);
  printf("%d\n",!0.0);
  return 0;

}*/

/*#include<stdio.h>
int main()
{
    int a,b;
    a=4;          #include<stdio.h>
int main()
{
    int a,b;
    a=4;
    b=3;
    printf("%d\n",a<<4);
    printf("%d\n",b>>3);
    return 0;
}
    b=3;
    printf("%d\n",a<<4);
    printf("%d\n",b>>3);
    return 0;                 4 > 5 , 4 < 5, 4 >= 5, 5 = 5, 4 == 5,
}*/

/*#include<stdio.h>
int main()
{ int a,b;
a=4;
b=5;
printf("%d\n",a>b);
printf("%d\n",a<b);
printf("%d\n",a>=b);
printf("%d\n",b==b);
printf("%d\n",a==b);
return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a,b,c;
    a=2;
    b=3;
    c=4;
    printf("%d",c>b&&b>a);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value a =");
    scanf("%d",&a);
    printf("%d",!!!!a);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
int d1,d2,q;
printf("enter the dividend and divisor");
scanf("%d %d",&d1,&d2);
for(q=0;d1>=d2;q++)
{
    d1-=d2;

}
printf("the result=%d",q);
}*/


/*#include<stdio.h>
#define TAX 8%
#define DISCOUNT 5%
int main()
{
    int i;
int total_no_of_items;
float total,tax,discount,total_amount;
printf("SUPER STORE BILLING\n");
printf("-------------------\n");
for(i=1;i<=total_no_of_items;i++)
{
    char itemname[50];
    float price;
    int quantity;

    printf("%d",i);
    printf("Enter item name:\n");
    scanf("%s",itemname);
    printf("Enter price:\n");
    scanf("%f",&price);
    printf("Enter quantity:\n");
    scanf("%d",&quantity);

float itemtotal=price*quantity;
float itemtax=itemtotal*TAX;
float itemdiscount=itemtotal*DISCOUNT ;

    printf("item total=%.2f\n",itemtotal);
    printf("tax=%.2f\n",itemtax);
    printf("discount=%.2f\n",itemdiscount);
total_amount=itemtotal+itemtax-itemdiscount;
total+=itemtotal;
tax+=itemtax;
discount+=itemdiscount;
}

printf("TOTAL BILLING\n");
printf("-------------\n");
printf("SUBTOTAL=%f",total);
printf("TAX=%f",tax);
printf("DISCOUNT=%f",discount);
printf("TOTAL AMOUNT=%f",total_amount);
return 0;
}*/

#include <stdio.h>

#define TAX 0.08
#define DISCOUNT 0.05

int main() {
    int total_no_of_items;
    float total = 0, tax = 0, discount = 0, total_amount = 0;

    printf("SUPER STORE BILLING\n");
    printf("-------------------\n");

    printf("Enter total number of items: ");
scanf("%d", &total_no_of_items);

    for(int i = 1; i <= total_no_of_items; i++) {
        char itemname[50];
        float price;
        int quantity;

        printf("%d. Enter item name: ", i);
        scanf("%s", itemname);
        printf("Enter price: ");
        scanf("%f", &price);
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        float itemtotal = price * quantity;
        float itemtax = itemtotal * TAX;
        float itemdiscount = itemtotal * DISCOUNT;
       total += itemtotal;
        tax += itemtax;
       discount += itemdiscount;

        printf("Item total = %.2f\n", itemtotal);
        printf("Tax = %.2f\n", itemtax);
        printf("Discount = %.2f\n", itemdiscount);


    }
total_amount = total +tax -discount;
    printf("\nTOTAL BILLING\n");
    printf("-------------\n");
    printf("SUBTOTAL = %.2f\n", total);
    printf("TAX = %.2f\n", tax);
    printf("DISCOUNT = %.2f\n", discount);
    printf("TOTAL AMOUNT = %.2f\n", total_amount);

    return 0;
}

