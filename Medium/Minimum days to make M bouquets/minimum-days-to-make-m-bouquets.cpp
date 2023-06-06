//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool isTheIdealDay(int M, int K, vector<int> &bloomDay,int mid)
    {
        int adj = 0;
        int bc = 0;
        
        for(auto x:bloomDay)
        {
            if(x <= mid)
            {
                adj++;
                if(adj == K)
                {
                    bc++;
                    adj =0;
                    if(bc >= M)
                        return true;
                }
            }
            else
                adj = 0;
        }
        
        return false;
        
    }
    
    int solve(int M, int K, vector<int> &bloomDay){
      // Code here
      
        int maxi = INT_MIN;
        int n = bloomDay.size();
        for(int i =0;i<n;i++)
            maxi = max(maxi,bloomDay[i]);
          
          
        if(K*M > n)
            return -1;
            
            
        int low = 1,high = maxi;
        int res = -1;
        while(low <= high)
        {
            int mid = low +(high - low)/2;
            
            if(isTheIdealDay(M,K,bloomDay,mid))
            {
                res = mid;
                high = mid - 1;
            }
            else
                low = mid +1;
        }
        
        return res;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends