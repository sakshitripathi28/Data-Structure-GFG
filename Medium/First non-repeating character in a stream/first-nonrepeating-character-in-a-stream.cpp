//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<int> freq(26,0);
		    vector<char> v;
		    string ans = "";
		    
		    for(int i=0;i<A.size();i++)
		    {
		        if(freq[A[i] - 'a'] == 0)
		        {
		            v.push_back(A[i]);
		        }
		            
		        freq[A[i] - 'a']++;
		        int flag = 0;
		        
		        for(int j=0;j<v.size();j++)
		        {
		            if(freq[v[j] - 'a'] == 1)
		            {
		                ans.push_back(v[j]);
		                flag = 1;
		                break;
		            }
		        }
		        if(flag == 0)
		        {
		            ans.push_back('#');
		        }
		    }
		    
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends