#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merged;
        int i=0, j=0;
        for (int k=0; k<m; k++) {
            if(i<m-n && j<n) {
                if(nums1[i]<nums2[j]){
                    merged.push_back(nums1[i]);
                    i++;
                }
                else {
                    merged.push_back(nums2[j]);
                    j++;
                }
            } else if(i==m-n) {
                merged.push_back(nums2[j]);
                j++;
            } else if(j==n) {
                merged.push_back(nums1[i]);
                i++;
            }
        }
        for (int k=0;k<m;k++){
            nums1[k]=merged[k];
        }
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    s.merge(nums1, 6, nums2, 3);
    return 0;
}