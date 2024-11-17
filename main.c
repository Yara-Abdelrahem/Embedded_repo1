#include "stdio.h"
#include "conio.h"
#include "division.c"
#include "sub.c"
#include "multiplication.c"

void scan_input(float*, float*);

int main(void) {
    do {
        char c;
        float a, b;
        printf("\033c"); // Clear screen

        printf("Please enter your preferred operation: + - * / \n");
        c = getch();

        switch (c) {
            case '/':
                scan_input(&a, &b);
                printf("a/b = %.2f\n", Division(a, b));
                break;

            case '-':
                scan_input(&a, &b);
                printf("a-b = %.2f\n", subtract(a, b));
                break;

            case '*':
                scan_input(&a, &b);
                printf("a*b = %.2f\n", multiplication(a, b));
                break;

            default:
                printf("Invalid operation\n");
        }

        printf("Press any key to continue. To exit, press 'n'.\n");
    } while (getch() != 'n');

    return 0;
}

void scan_input(float* a, float* b) {
    printf("Enter a:\n");
    fflush(stdout);
    scanf("%f", b); // Dereference the pointer
}