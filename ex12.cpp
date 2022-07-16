#include <stdio.h>

 int main(void) { 
        int x,y; 
        int bool_value;

        x = 4; y= 8;

        bool_value = (x >= y ); 
        printf(" x > y ==> %d\n",bool_value);
        bool_value = (x <= y ); 
        printf(" x < y ==> %d\n",bool_value); 
        bool_value = (x <= 12 || x <= 18); 
        printf(" x < 5 || x < 10 ==> %d\n",bool_value);
}
