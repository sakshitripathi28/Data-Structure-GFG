//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void solve(string s,int index,string output,vector<string> &ans)
	    {
	        if(index == s.length())
	        {
	            if(output.length() > 0)
	            {
	                ans.push_back(output);
	            }
	            return;
	        }
	        
	        solve(s,index+1,output,ans);
	        
	        char ele = s[index];
	        output.push_back(ele);
	        solve(s,index+1,output,ans);
	        
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    
		    vector<string> ans;
		    
		    string output = "";
		    
		    int index =0;
		    
		    solve(s,index,output,ans);
		    
		    sort(ans.begin(),ans.end());
		    
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends