//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    void solve(vector<int> nums ,int index,vector<int> output,vector<vector<int>> &ans)
    {
        
        if(index >= nums.size())
        {
            ans.push_back(output);
            return;
        }

            
            // while(index+1<nums.size() && nums[index+1]==nums[index])index++;
            
            solve(nums,index+1,output,ans);
            
         
            int ele = nums[index];
            output.push_back(ele);
            solve(nums,index+1,output,ans);
        
    }
  
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        // Write your code here
        
        vector<vector<int>> ans,ans1;
        vector<int> output;
        
        sort(nums.begin(),nums.end());
        int index = 0;
        
        solve(nums,index,output,ans);
        
        set<vector<int>> st;

        for(auto it:ans){

            st.insert(it);

        }

        for(auto it:st){

            ans1.push_back(it);

        }

        return ans1;

    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;
        vector<vector<int>> ans = obj.printUniqueSubsets(nums);
        sort(ans.begin(), ans.end());
        //   printAns(ans);
        cout << "[ ";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "]";
        }
        cout << " ]\n";

        // cout<< "~\n";
    }

    return 0;
}

// } Driver Code Ends