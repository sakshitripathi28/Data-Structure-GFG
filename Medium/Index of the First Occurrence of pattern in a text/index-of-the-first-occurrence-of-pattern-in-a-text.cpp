//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMatching(string text, string pat) {
        // Code here
        int t =text.size();
        int p = pat.size();
        //sliding window
        
        int i=0;
        while(i<t-p+1)
        {
            if(text[i] == pat[0])
            {
                int k = i;
                int j =0;
                while(j<p)
                {
                    if(text[k] != pat[j])
                        break;
                        
                    j++;
                    k++;
                }
                if(j == p)
                    return i;
            }
            i++;
        }
        
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string text, pat;
        cin >> text >> pat;
        Solution obj;
        cout << obj.findMatching(text, pat) << endl;
    }
    return 0;
}
// } Driver Code Ends