//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string compare(string a,string b)
    {
        string res = "";
        int i=0,j=0;
        
        while(i<a.length() && j<b.length())
        {
            if(a[i] == b[j])
            {
                res.push_back(a[i]);
            }
            else
            {
                return res;
            }
            i++;
            j++;
        }
        
        return res;
    }
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ans = arr[0];
        
        for(int i=0;i<N-1;i++)
        {
            string s = compare(ans,arr[i+1]);
            
            if(s.empty())
            {
                return "-1";
            }
            else
            {
                ans = s;
            }
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends