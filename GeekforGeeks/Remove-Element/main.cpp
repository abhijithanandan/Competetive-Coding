#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int pos_last_non_val = n-1;
        int count = 0;
        for(int i=n-1;i>=0;i--) {
            if(nums[i]==val) {
                nums[i]=nums[pos_last_non_val];
                nums[pos_last_non_val]=val;
                pos_last_non_val--;
                count++;
            }
        }
        return n-count;
    }
};


int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    int val;
    cin>>val;
    Solution sol;
    int count = sol.removeElement(nums,val);
    cout<<count<<endl;
    for(int i=0;i<count;i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}