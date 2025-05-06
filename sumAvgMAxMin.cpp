#include <bits/stdc++.h>
using namespace std;

int main(){
    /* vector<int> list ={4, 7, 2, 9, 5};
    int sum = 0, max = INT_MIN, min = INT_MAX;
    
    for(int num : list){
        sum+=num;
        if(num>max) max = num;
        if(num<min) min =  num;
    }

    double avg = double(sum) / list.size();

    cout<<"Sum: "<<sum <<"\nAverage: "<<avg;
    cout<<"\nMax: "<<max <<"\nMin: "<<min<<endl;
 */
    int arr[]={4, 7, 2, 9, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = 0, max = INT_MIN, min = INT_MAX;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(arr[i]>max) max = arr[i];
        if(arr[i]<min) min =  arr[i];
    }
    
    double avg = double(sum) / n;
    cout<<"Sum: "<<sum <<"\nAverage: "<<avg;
    cout<<"\nMax: "<<max <<"\nMin: "<<min<<endl;
    
    

    return 0;
}