//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int recursive(string str,int sign,int i,int result)
    {
        if(i>=str.size())
        {
            return sign*result;
        }
        
        if(str[i] < '0' || str[i] > '9')
            return -1;
        
        if(str[i] >= '0' && str[i] <= '9' && i<str.size())
        {
            result = result * 10 +(str[i] - '0');
        
            result = recursive(str,sign,i+1,result);
            
        }
        
        return result;
        
    }
    int atoi(string str) {
        //Your code here
        
        int n = str.length();
        
        int sign= +1;
        int i=0;
        if(str[i] == '-' )
        {
            sign = -1;
            i++;
        }
        
        return recursive(str,sign,i,0);
        
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
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends