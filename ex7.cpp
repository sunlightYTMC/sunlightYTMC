#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    float a,b;
    printf("please input two number \n ");
    printf(" first number :\n ");
    scanf("%f",&a);
    printf(" second number :\n ");
    scanf("%f",&b);
    //printf(" my height is%2dm%3dcm \n",a,b);
    printf("%f + %f = %f\n",a,b,a+b);
    printf("%f - %f = %f\n",a,b,a-b);
    printf("%f * %f = %f\n",a,b,a*b);
    printf("%f / %f = %f\n",a,b,a/b);
    cout <<  "Chiyang lin ";
    //cout <<  "my height is " << a << "m " << b << "cm";

    return 0;
}
