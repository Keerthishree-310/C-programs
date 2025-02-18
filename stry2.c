#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Simulate a student's college life
void study_for_exam() {
    printf("Julia is sitting in the library, trying to study for the midterm.\n");
    printf("But she has only 2 hours left and hasn't studied much!\n");
}

void check_phone() {
    printf("Julia's phone buzzes with a message from her roommate: 'Don't forget to breathe!'\n");
}

void glance_at_classmate() {
    printf("Julia looks at the guy next to her. He's already finished his notes and seems calm.\n");
    printf("Julia feels a little jealous but decides to focus.\n");
}

void attempt_exam() {
    printf("The midterm begins. Julia faces difficult coding problems, mostly in C language.\n");
    printf("She struggles but manages to finish withwith a few seconds left.\n");
}

void check_grade() {
    int grade = rand() % 101;  // Random grade between 0 and 100
    printf("Julia checks her grade. She got a %d%%. She passed... just barely!\n", grade);
}

int main()
 {
    srand(time(0));  // Seed for random number generation

    printf("Welcome to Julia's college life simulation!\n\n");

    study_for_exam();
    check_phone();
    glance_at_classmate();
    attempt_exam();
    check_grade();

    printf("\nSometimes, just showing up and doing your best is enough.\n");

return 0;
}
