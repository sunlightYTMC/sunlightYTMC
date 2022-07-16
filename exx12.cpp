#include <stdio.h>

int main() {
    int a, b, product;
    a = 9;
    b = 7;
    //a++;
    //a++;
    a--;
    a--;
    printf("a = %d\n ", a);
    // Calculating product
    product = a % b;

 
    printf("Product = %d", product);
    
    return 0;
}
