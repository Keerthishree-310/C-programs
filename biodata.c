#include <stdio.h>

int main() {
    // Declare variables
    char n[20], f[20], g, b, a[70], r[30], c[20], e[20];
    long int d;
    int m1, m2, s;
    long long int p;

    // Get input
    printf("Name: ");
    scanf("%s", n);

    printf("Father's name: ");
    scanf("%s", f);

    printf("Date of birth (YYYYMMDD): ");
    scanf("%ld", &d);

    printf("Gender (F/M): ");
    scanf(" %c", &g); // Note the space before %c to consume any leftover newline

    printf("Blood group: ");
    scanf(" %c", &b); // Space before %c to consume any leftover newline

    printf("Address: ");
    getchar(); // Consume newline character left in buffer
    fgets(a, sizeof(a), stdin); // Use fgets for strings with spaces

    printf("Register number: ");
    scanf("%s", r);

    printf("Course: ");
    scanf("%s", c);

    printf("10th mark: ");
    scanf("%d", &m1);

    printf("12th mark: ");
    scanf("%d", &m2);

    printf("Cutoff: ");
    scanf("%d", &s);

    printf("Contact number: ");
    scanf("%lld", &p);

    printf("E-mail: ");
    scanf("%s", e);

    // Display collected information (optional)
    printf("\nCollected Information:\n");
    printf("Name: %s\n", n);
    printf("Father's Name: %s\n", f);
    printf("Date of Birth: %ld\n", d);
    printf("Gender: %c\n", g);
    printf("Blood Group: %c\n", b);
    printf("Address: %s", a); // Note: fgets retains the newline
    printf("Register Number: %s\n", r);
    printf("Course: %s\n", c);
    printf("10th Mark: %d\n", m1);
    printf("12th Mark: %d\n", m2);
    printf("Cutoff: %d\n", s);
    printf("Contact Number: %lld\n", p);
    printf("E-mail: %s\n", e);

    return 0;
}

