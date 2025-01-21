#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {-1, 1, 0, -3, 3};
    vector<int>ans;
    sort(nums.begin(),nums.end(),greater<int>());
    // ans.push_back(nums[0]);
    // for(int i=1;i<nums.size();i++){
    //     ans.push_back(nums[i]*ans[i-1]);
    // }
    // int temp=1;
    // for(int i=nums.size()-1;i>=0;i--){
    //     if(i==0){
    //         ans[i]=temp;
    //     }
    //     else{
    //         ans[i]=ans[i-1]*temp;
    //         temp*=nums[i];
    //     }   
    // }
    for(auto u:nums){
        cout<<u<<" ";
    }
    return 0;
}