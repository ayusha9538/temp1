#include <stdio.h>
void add();
void subtract();
void multiply();
void divide();
void modulo();
void square();
void cube();
void power();
int main() {
     printf("Ayush  kumar\n");
    printf("ERP: 11723 \n");
    int choice;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y') {
        printf("\n******** MINI CALCULATOR ********\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulo\n");
        printf("6. Square of a number\n");
        printf("7. Cube of a number\n");
        printf("8. Power of a number\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:add(); 
            break;
            case 2: subtract(); 
            break;
            case 3: multiply(); 
            break;
            case 4: divide();
            break;
            case 5: modulo();
            break;
            case 6: square();
            break;
            case 7: cube(); 
            break;
            case 8: power();
            break;
            case 9:
                printf("\nThank you for using calculator\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &ch); }
    printf("\nThank you for using calculator\n");
    return 0;
}
void add() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Result = %d\n", a + b);
}
void subtract() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Result = %d\n", a - b); }
void multiply() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Result = %d\n", a * b); }
void divide() {
    float a, b;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    if (b != 0)
        printf("Result = %.2f\n", a / b);
    else
        printf("Division by zero is not allowed\n");}
void modulo() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if (b != 0)
        printf("Result = %d\n", a % b);
    else
        printf("Modulo by zero is not allowed\n"); }
void square() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    printf("Square = %d\n", a * a); }
void cube() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    printf("Cube = %d\n", a * a * a); }
void power() {
    int base, exp, i;
    long long result = 1;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &exp);
    for (i = 1; i <= exp; i++) {
        result = result * base; 
    }
    printf("Result = %lld\n", result);
}