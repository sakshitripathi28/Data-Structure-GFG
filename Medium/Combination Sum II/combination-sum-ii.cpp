//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void solve(vector<int> candidates, int index,int target, vector<int> &output,vector<vector<int>> &ans)
    {
        if(target == 0)
        {
            ans.push_back(output);
            return;
        }
        
         for(int i=index;i<candidates.size();i++){
            if(i != index && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            output.push_back(candidates[i]);
            solve(candidates,i+1,target-candidates[i],output,ans);
            output.pop_back();
        }
        
        // if(target < 0) return;
        // if(index == candidates.size())
        // {
        //     return;
        // }
        
        // if(candidates[index] <= target)
        // {
        //     output.push_back(candidates[index]);
        //     sum += candidates[index];
        //     solve(candidates,index+1,sum,target - candidates[index] ,output,ans);
        //     sum -= candidates[index];
        //     output.pop_back();
            
        // }
        
        
        // while(index+1 < candidates.size() && candidates[index+1] == candidates[index]) index++;
        // solve(candidates,index+1,sum,target,output,ans);
        
        
        
        
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        // Write your code here
        
        vector<vector<int>> ans;
        vector<int> output;

        int index = 0;
        
        sort(candidates.begin(),candidates.end());
        solve(candidates,index,target,output,ans);

        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends