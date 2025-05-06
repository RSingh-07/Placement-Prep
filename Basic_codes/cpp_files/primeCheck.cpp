#include <iostream>
using namespace std;


int primeCheck(int num){
    bool isPrime = true;
    if(num<=1){
        isPrime =  false;
    }
    for(int i =2; i*i<=num;i++){
        if(num%i==0){
            return false;
        }else{
           return true;
        }
    }
}
int main(){

    int num = 2;
    if(primeCheck(num)){
        cout<<" Prime.\n"<<endl;
    }else{
        cout<<" Not prime.\n"<<endl;
    }

    return 0;

}