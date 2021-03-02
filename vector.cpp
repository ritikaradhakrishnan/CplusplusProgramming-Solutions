#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {/**
    int size;
    cin>>size;
    vector<int>v;
    int a;
    for(int i=0;i<size;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }**/
    int size;
    cin>>size;
    vector<int>v;
    int nums;
    while(cin>>nums) 
    v.push_back(nums);
    sort(v.begin(),v.end());
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}
