//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        // your code here
        int n = s.size();
        int i = n-1;
        
        while(i>=0)
        {
            if(s[i] % 2 != 0)
            {
                string ans = s.substr(0,i+1);
                return ans;
            }
            i--;
        }
        
        return "";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends