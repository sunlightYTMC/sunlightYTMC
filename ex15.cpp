#include <iostream> 
#include <stdio.h> 
using namespace std;  
int main() {
    printf(" hello teacher ");
    float a, b, product; 
    printf("please input a number\n");
    scanf("%f",&a);
    if(a >= 0){
          printf(" r >= 0 \n");  
    }else{
          printf(" r <= 0 \n");
         }     
        
      	  
        
    // Calculating product 
    product = 3.14159*a*a;
    printf("Product = %f \n",  product);
    //printf("Product = %f \n", 2* 3.14159* a);
    product =3.14159*2 * a ;
    printf("Product = %f \n",  product);
    return 0; 
}
