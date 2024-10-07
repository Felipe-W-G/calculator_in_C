// Creator: Felipe Wunder Giovaneli
// Date: 2024-10-05
// Brief Description: Simple calculator in C

#include <stdio.h>
#include <stdlib.h>

void sum() {
    float num1, num2, result;
    printf("Enter the first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("Invalid input\n");
        return;
    }
    printf("Enter the second number: ");
    if (scanf("%f", &num2) != 1) {
        printf("Invalid input\n");
        return;
    }
    result = num1 + num2;
    printf("The result is: %.2f\n", result);
}

void sub() {
    float num1, num2, result;
    printf("Enter the first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("Invalid input\n");
        return;
    }
    printf("Enter the second number: ");
    if (scanf("%f", &num2) != 1) {
        printf("Invalid input\n");
        return;
    }
    result = num1 - num2;
    printf("The result is: %.2f\n", result);
}

void mul() {
    float num1, num2, result;
    printf("Enter the first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("Invalid input\n");
        return;
    }
    printf("Enter the second number: ");
    if (scanf("%f", &num2) != 1) {
        printf("Invalid input\n");
        return;
    }
    result = num1 * num2;
    printf("The result is: %.2f\n", result);
}

void divi() {
    float num1, num2, result;
    printf("Enter the first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("Invalid input\n");
        return;
    }
    printf("Enter the second number: ");
    if (scanf("%f", &num2) != 1) {                                                     
        printf("Invalid input\n");
        return;
    }
    if (num2 == 0) {
        printf("Error: Division by zero\n");
    } else {
        result = num1 / num2;
        printf("The result is: %.2f\n", result);
    }
}

void menu() {
    printf("\n");
    printf("Choose one option:\n");
    printf("1 - Sum\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    printf("5 - Exit\n");

    int option;
    printf("Option: ");
    if (scanf("%d", &option) != 1) {
        printf("Invalid input\n");
        return;
    }

    switch (option) {
        case 1:
            sum();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            divi();
            break;
        case 5:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid option\n");
            printf("Try again\n");
            break;
    }
}

int main() {
    printf("Welcome to the calculator in C!\n");
    while (1) {
        menu();
    }
    return 0;
}
