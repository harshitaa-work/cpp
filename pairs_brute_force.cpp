/*
Problem: Pairs

Given an array containing N integers, and a number S denoting a target sum.
Find two distinct integers that can pair up to form a target sum. 
Let us assume there will be only one such pair.

Input Example:
array = [10, 5, 2, 3, -6, 9, 11]
S = 4

Output Example:
[10, -6]
*/


//brute force take order n^2 time complexity
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<endl;
    for (int i=0;i<n;i++){
       cout<<"enter" <<i <<"th array ";
       cin>>arr[i];
       cout<<endl;
    }
    int s=4;
    cout<<"enter sum"<<endl;
    cin>>s;
    for (int i=0;i<n;i++){
        for(int j=i+1; j<n;j++){
            if (arr[i]+arr[j]==s) {
                cout<<arr[i]<<" "<< arr[j]<<endl;
            }
        }
    }
   

    return 0;
}
