//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canEatBanana(vector<int>& piles, int N,int mid,int H)
    {
        int hour = 0;
        
        for(int i=0;i<N;i++)
        {
            hour += piles[i]/mid;
            
            if(piles[i]%mid != 0)
                hour++;
                
            if(hour > H)
                return false;
        }
        
        return true;
        
    }
    
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        
        int maxi = INT_MIN;
        
        for(int i=0;i<N;i++)
        {
            maxi = max(maxi,piles[i]);
        }
        
        int low = 1,high = maxi;
        
        int res = -1;
        
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            
            if(canEatBanana(piles,N,mid,H))
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends