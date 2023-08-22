//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int count[256] = {0};
        int max = 0;
        char result;
        for (int i=0; i<str.length(); i++) {
            count[str[i]]++;
            if (max < count[str[i]]) {
                max = count[str[i]];
                result = str[i];
            } else if (max == count[str[i]]) {
                if (result > str[i]) {
                    result = str[i];
                }
            }
        }

        return result;
        
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends