#include <iostream>
using namespace std;

int main(){
    int a =20 , b= 30;
    cout<<" Before swapping: a = "<< a << " and b = "<< b<< endl;
    /* a=a+b; // without temp
    b=a-b;
    a=a-b; */

    int temp; // with temp
    temp = a;
    a =b;
    b=temp;

    cout<<" After swapping: a = "<< a << " and b = "<< b<< endl;
    return 0;
}