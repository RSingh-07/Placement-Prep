#include <iostream>
using namespace std;
int  main(){
    string str = "Riya";
    int start = 0, end = str.length()-1;
    cout<< " The original string is "<< str<<endl;
    while(start < end){
        swap(str[start], str[end]);
        start++;
        end--;
    }

    cout<< " The reversed string is "<< str<<endl;

    return 0;
}