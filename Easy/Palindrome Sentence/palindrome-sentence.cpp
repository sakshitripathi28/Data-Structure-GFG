//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here
	    int i=0;
        // erase all characters other than alphabets 
        for(int j=0;j<s.length();j++)
        {
            if(isalpha(s[j]))
                s[i++]=s[j];
        }
        s.erase(s.begin()+i,s.end());
	    i=0;
	    int j = s.size()-1;
	    
	    while(i<j)
	    {
	        if(s[i] == s[j])
	        {
	            i++;
	            j--;
	        }
	        else
	        {
	            return false;
	        }
	    }
	    
	    return true;
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends