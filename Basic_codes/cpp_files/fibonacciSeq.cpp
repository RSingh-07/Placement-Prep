#include <iostream>
using namespace std;

void  fibonacciSeq(int n){
    int a=0, b=1;
    /* cout<<a<<" "<< b <<" "; */
    for(int i = 2; i<n;i++){
        int next = a+b;
        /* cout<<next <<" "; */
        a = b;
        b = next;
    }
    cout<< b; // print nth term
}
int  main(){

    int n = 7;
    cout<<" Fibonacci sequence : ";
    fibonacciSeq(n);
    return 0;
}