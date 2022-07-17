#include <iostream>
using namespace std;
int main()
{
    int i,sum =0,a[5]={5,4,3,2,1};
    
    for(i=0;i<5;i++){
       sum = sum + a [i];    
        printf("a[%d]=%d \n",i,a[i]);
        
    }
    printf("a[0]=%d \n",a[0]);
    printf("sum =[0]=%d \n",sum);
    printf("sum =[0]=%d \n",sum/5);
    cout << "Hi my dearest hacker what is the task for today";
    return 0;
}
