//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isSmallestDivisor(vector<int>& nums, int K,int mid)
    {
        int sum = 0;
        
        for(int i =0;i< nums.size();i++)
        {
            sum += ceil(nums[i]*1.0/mid);
            
        }
        
        return sum <= K ;
    }
  
    int smallestDivisor(vector<int>& nums, int K) {

        // Write your code here.
        
        int maxi = INT_MIN;
        
        for(auto x:nums)
            maxi = max(maxi,x);
        
        int low = 1,high = maxi;
        int res = -1;
        
        while(low <= high)
        {
            int mid = low +(high - low)/2;
            
            if(isSmallestDivisor(nums,K,mid))
            {
                res = mid;
                high = mid-1;
            }
            else
                low = mid+1;
            
        }
        
        return res;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends