//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        long long sum = 0;
        int j = 0;
        vector<int> results = {-1};
        for (int i=0; i<n; i++) {
            sum = sum + arr[i];
            cout << "i = " << i << " and sum = " << sum << endl;
            if (sum > s ) {
                cout << "sum is now greater than s" << endl;
                while(sum > s){
                    sum = sum - arr[j];
                    j = j+1;
                }
            }
            if (sum == s) {
                results = {j+1, i+1};
                break;
            }
        }
        return results;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}