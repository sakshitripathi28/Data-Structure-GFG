//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    
		    int n = str.size();
            vector<vector<int>> dp(n, vector<int> (n, 0));
            bool flag=false;
            // initializing base case
            for(int i=1; i<n; i++){
                 if(flag||str[i]==str[0]){
                    flag=true;
                    dp[i][0]=1;
                    dp[0][i]=1;
                 }
            }
            for(int i=1; i<n; i++){
                for(int j=1; j<n; j++){
                    // increase length of repeating subsequence if a character matches
                    if(i!=j&&str[i]==str[j]){
                        dp[i][j] += dp[i-1][j-1]+1;
                    }
                    // get max length till now in the current cell discard the lesser length subsequence
                    else{
                        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                    }
                }
            }
            return dp[n-1][n-1];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends