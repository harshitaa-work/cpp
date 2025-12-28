
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findPair(vector<int>arr,int sum){
    vector<int>result;
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int left=0;
    int right=n-1;
    while(left<right){
        if(arr[left]+arr[right]==sum){
            result.push_back(arr[left]);
            result.push_back(arr[right]);
            return result;
            break;
        }
        else if(arr[left]+arr[right]>sum){
            right--;
        }
        else{
            left++;
        }
    }
    return result;
    
}

int main() {
    vector<int>arr={10,5,2,3,-6,9,11};
    int s=4;
    vector<int>p=findPair(arr,s);
    
    std::cout <<p[0]<<p[1];

    return 0;
}
