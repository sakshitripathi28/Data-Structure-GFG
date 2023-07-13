//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string ans ="";
        for(int i=0;i<S.size();i++)
        {
            if(ans.empty())
            {
                ans.push_back(S[i]);
            }
            else
            {
                
                if(ans.back() == S[i])
                {
                    ans.pop_back();
                }
                ans.push_back(S[i]);
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends