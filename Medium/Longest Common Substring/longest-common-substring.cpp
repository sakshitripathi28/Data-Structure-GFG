//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        vector<vector<int>> dp(n+1 , vector<int>(m+1,0));
        
        for(int i=1;i<n+1;i++)
        {
            for(int j = 1;j<m+1;j++)
            {
                if(S1[i-1] == S2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        
        
        int maxLen=0;              // Now finding the max element
         for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
              maxLen=max(maxLen,dp[i][j]);
        }
        return maxLen;

        
        
        
        
        // vector<int> curr(n+1,0);
        // vector<int> next(m+1, 0);
        
        // for(int i=1;i<n+1;i++)
        // {
        //     for(int j = 1;j<m+1;j++)
        //     {
        //         if(S1[i-1] == S2[j-1])
        //         {
        //             curr[j] = 1 + next[j-1];
        //         }
        //         else
        //         {
        //             curr[j] = 0;
        //         }
        //     }
        //     next = curr;
        // }
        
        // return next[n];
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends