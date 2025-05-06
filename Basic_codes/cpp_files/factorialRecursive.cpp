#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n<0){
        cout<<"Error : Negative numbers.";
        return -1;
    }
    if(n<=1)
        return 1;
    return n*factorial(n-1);
}
int main(){
    int n=3;
    int result = factorial(n);
    if(result!=-1){
        cout<<" The factorial of "<<n << " is "<<result<<endl;
    }
    
    return 0;
}