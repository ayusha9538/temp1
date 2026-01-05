#include <stdio.h>
int main() {
     printf("Ayush  kumar\n");
    printf("ERP: 11723 \n");
    int num, a, b, c;
    int choice;
    char op;
    float x, y;
    printf("*** Odd / Even Check ***\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is Even\n\n", num);
    else
        printf("%d is Odd\n\n", num);
    printf("*** Maximum of Three Numbers (Nested if) ***\n");
    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second numbers: ");
    scanf("%d",&b);
    printf("Enter third numbers: ");
    scanf("%d",&c);
    if (a > b) {
        if (a > c)
            printf("Maximum number is: %d\n\n", a);
        else
            printf("Maximum number is: %d\n\n", c);
    } else {
        if (b > c)
            printf("Maximum number is: %d\n\n", b);
        else
            printf("Maximum number is: %d\n\n", c);
    }
    printf("*** Maximum of Three Numbers (Ternary Operator) ***\n");
    int max;
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Maximum number is: %d\n\n", max);
    printf("*** Calculator (Switch Case) ***\n");
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter first numbers: ");
    scanf("%f", &x);
    printf("Enter second numbers: ");
    scanf("%f", &y);
    switch (op) {
        case '+':
            printf("Result: %.2f\n", x + y);
            break;
        case '-':
            printf("Result: %.2f\n", x - y);
            break;
        case '*':
            printf("Result: %.2f\n", x * y);
            break;
        case '/':
            if (y != 0)
                printf("Result: %.2f\n", x / y);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}