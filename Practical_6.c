#include <stdio.h>
int add_return(int a, int b){
    return a + b;
}
void add_printf(int a, int b){
    printf("Sum using printf = %d\n", a + b);
}
int main(){
    printf("Ayush  kumar\n");
    printf("ERP: 11723 \n");
    int result;
    result = add_return(10, 20);
    printf("Sum using return = %d\n", result);
    add_printf(10, 20);
    return 0;
}
