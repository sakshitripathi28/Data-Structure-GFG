//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void solve(int i,int k,int n,int sum,vector<int> output,vector<vector<int>> &ans)
    {
        if(k == 0)
        {
            if(sum == n)
            {
                ans.push_back(output);
            }
            return;
        }
        
        if(i == 10) return;
        
        output.push_back(i);
        sum += i;
        solve(i+1,k-1,n,sum,output,ans);
        sum -= i;
        output.pop_back();
        
        solve(i+1,k,n,sum,output,ans);
        
    }
    vector<vector<int>> combinationSum(int K, int N) {
        // code here
        
        vector<vector<int>> ans;
        vector<int> output;

        int i = 1;
        int sum = 0;

        solve(i,K,N,sum,output,ans);

        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends