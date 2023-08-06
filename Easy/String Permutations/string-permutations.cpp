//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void solve(string S,int index,vector<string> &ans)
    {
        if(index >= S.size())
        {
            ans.push_back(S);
            return;
        }
        
        for(int i = index;i<S.size();i++)
        {
            swap(S[index],S[i]);
            solve(S,index+1,ans);
            
            swap(S[index],S[i]);
        }
        
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> ans;
        int index = 0;
        solve(S,index,ans);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends