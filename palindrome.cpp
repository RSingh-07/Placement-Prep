#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "riya";
    int n = str.length();

    bool isPalindrome =  true;
    for(int i = 0; i < n / 2 ; i++){
        if(str[i] != str[n - i - 1]){
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
       cout << str << " is a palindrome.\n";
    else 
       cout<< str << " is not a palindrome.\n";
    return 0;
}