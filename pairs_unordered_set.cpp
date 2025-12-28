
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#include<unordered_set>

vector<int> findhash(vector<int>arr,int sum){
    vector<int>result;
    unordered_set<int>s;
    for (int i=0;i<arr.size();i++){
        int comp=sum-arr[i];
        if(s.find(comp)!=s.end()){
            result.push_back(comp);
            result.push_back(arr[i]);
            return result;
        }
        s.insert(arr[i]);
    }
    return result;
}


int main() {
    vector<int>arr={10,5,2,3,-6,9,11};
    int s=4;
    vector<int>p=findhash(arr,s);
    
    std::cout <<p[0]<<p[1];

    return 0;
}
