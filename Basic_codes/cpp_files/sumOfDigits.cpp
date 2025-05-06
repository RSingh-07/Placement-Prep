#include <iostream>
using namespace std;
int  main(){
    int num =1240;
    int sum = 0;
    while(num!=0){
       sum += num % 10;
       num/=10;
    }

    cout<<"The sum of the digits are : "<<sum<<endl;
    return 0;
}