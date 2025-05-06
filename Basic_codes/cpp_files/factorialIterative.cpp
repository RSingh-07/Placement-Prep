#include<bits/stdc++.h>
using namespace std;


int factorial(int n){
    int product = 1;
    for(int i=2;i<=n;i++){
      product *=i;
    }
    return product;
}
int main(){
    int n=4;
    int result = factorial(n);
    cout<<"The ! is "<< result << endl;
    return 0;
}