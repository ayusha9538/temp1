#include <stdio.h>
int isPrime(int n){
    int i;
    if (n <= 1)
        return 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int factorial(int n){
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}
int main() {
    printf("Ayush  kumar\n");
    printf("ERP: 11723 \n");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n))
        printf("Prime Number\n");
    else
        printf("Not Prime Number\n");

    printf("Factorial = %d", factorial(n));
    return 0;
}