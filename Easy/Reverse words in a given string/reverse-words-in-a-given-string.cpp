//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int n = S.size();
        string v = "";
        for(int i=n-1;i>=0;i--)
        {
            if((i == 0) || S[i] == '.' || S[i] == '\0')
            {
                int j =i+1;
                if(i == 0) j =i;
                while(S[j] != '\0' && S[j] != '.')
                {
                    v.push_back(S[j]);
                    j++;
                }
                if(i != 0)
                    v.push_back('.');
            }
            
        }
        
        return v;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends