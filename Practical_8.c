#include <stdio.h>
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    printf("Ayush  kumar\n");
    printf("ERP: 11723 \n");
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("After swapping:\n");
    printf("x = %d\ny = %d", x, y);
    return 0;
}
