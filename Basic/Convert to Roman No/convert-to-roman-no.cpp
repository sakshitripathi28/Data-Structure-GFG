//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string convertToRoman(int n) {
        // code here
        string symbol[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int val[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans = "";
        
        for(int i=0;i<13;i++)
        {
            while(n >= val[i])
            {
                ans += symbol[i];
                n = n - val[i];
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}
// } Driver Code Ends