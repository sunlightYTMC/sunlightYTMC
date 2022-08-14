#include <iostream>
using namespace std;
int add(int x, int y){
    return x + y;
}
int sub(int x, int y){
    return x - y;
}
int mul(int x, int y){
    return x * y;
}
int dive(int x, int y){
    return x / y;
}
int main()
{
    int x,y;        
    x = 456 ;
    y = 678 ;
    printf(" x= %d , y = %d , x+y = %d\n",x,y ,add(x,y));
    printf(" x= %d , y = %d , x-y = %d\n",x,y ,sub(x,y));
    printf(" x= %d , y = %d , x*y = %d\n",x,y ,mul(x,y));
    printf(" x= %d , y = %d , x/y = %d\n",x,y ,dive(x,y));
    cout<<"Hello World";
    return 0;
}
