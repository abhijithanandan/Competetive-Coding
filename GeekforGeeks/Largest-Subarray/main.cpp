//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        // Your code here
        int zeros=0;
        int ones=0;
        int dominant=0;
        int weak=1;
        int length=0;
        
        // count zeros and ones
        for(int i=0;i<N;i++) {
            if(arr[i] == 0) zeros++;
            else ones++;
        }
        
        // find dominant element
        int diff=zeros-ones;
        
        // if zeros are more than ones, dominant element is 0
        if(ones>zeros){
            diff=-1*diff;
            dominant=1;
            weak=0;
        }
        
        // if zeros and ones are equal, return length of array
        if(diff==0) {
            length = N;
        }

        // pointer to beginning of array
        int i=0;

        //pointer to end of array
        int j=N-1;


        while(diff!=0) {
            // check begnning element of array is domainant or not
            if(arr[i]==dominant) {
                diff--;
                if(diff==0) {
                    length = j-i;
                    break;
                }
                i++;

            // check end element of array is domainant or not
            } else if(arr[j]==dominant){
                diff--;
                if(diff==0) {
                    length = j-i;
                    break;
                }
                j--;

            // if both are weak, move both pointers
            } else {
                i++;
                j--;
                diff++;
                diff++;
            } 
        }
        return length;
        
    }
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends