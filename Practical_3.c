#include <stdio.h>
int main() {
    printf("Ayush  kumar\n");
    printf("ERP: 11723 \n");
    int a, b;
    float f;
    double d;
    char ch;
    int temp;
    printf("Enter an integer value: ");
    scanf("%d", &a);
 printf("Enter second integer value: ");
  scanf("%d", &b);
    printf("Enter a float value: ");
    scanf("%f", &f);
    printf("Enter a double value: ");
    scanf("%lf", &d);
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("\nEntered Values:\n");
    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", f);
    printf("Double: %lf\n", d);
    printf("Character: %c\n", ch);
    printf("\nBefore Swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter Swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
