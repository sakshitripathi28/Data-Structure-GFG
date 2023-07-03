//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void solve(string &output,int open,int close,vector<string> &ans)
    {
        if(open == 0 && close == 0)
        {
            ans.push_back(output);
            return;
        }
        
        if(open > 0)
        {
            output.push_back('(');
            solve(output,open-1,close,ans);
            output.pop_back();
        }
        
        if(close > 0)
        {
            if(open < close)
            {
                output.push_back(')');
                solve(output,open,close-1,ans);
                output.pop_back();
            }
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        string output = "";
        int open = n;
        int close = n;
        
        solve(output,open,close,ans);
        
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
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends