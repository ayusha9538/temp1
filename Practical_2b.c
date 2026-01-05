#include <stdio.h>
int main() {
    printf("Ayush  kumar\n");
    printf("ERP: 11723 \n");
    int a, b, largest;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if (a > b)
        largest = a;
    else
        largest = b;
    printf("The largest number is = %d", largest);
    return 0;
}
