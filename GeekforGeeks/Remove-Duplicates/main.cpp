#include <bits/stdc++.h>
#include <set>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> unique;
        int n = nums.size();
        int count = 0;
        for (int i=0;i<n;i++) {
            if(unique.find(nums[i]) != NULL) {
                nums[i] = nums[n-1-count];
                nums[n-1-count] = nums[i];
            } else {
                count++;                         
                unique.insert(nums[i]);
            }
        }
    }
};

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    Solution sol;
    int count = sol.removeDuplicates(nums);
    cout<<count<<endl;
    for(int i=0;i<count;i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}