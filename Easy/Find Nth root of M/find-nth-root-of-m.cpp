//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int low = 0,high = m;
	    
	    while(low <= high)
	    {
	        int mid = low + (high - low)/2;
	        
	        long long ans =1 ;
	        for(int i=0;i<n;i++)
	        {
	            ans = ans * mid;
	            if(ans > m)
	                break;
	        }
	        
	        if(ans == m)
	            return mid;
	       else if(ans < m)
	            low = mid +1;
	       else 
	        high = mid -1;
	    }
	    
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends