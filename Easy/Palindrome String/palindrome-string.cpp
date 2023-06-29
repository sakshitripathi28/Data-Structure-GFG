//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
// 	bool palindrome(string S,int i)
// 	{
// 	    if(i >= S.length()/2)
// 	        return true;
	        
// 	   if(S[i] != S[S.length()-i-1])
// 	   {
// 	       return false;
// 	   }
	   
// 	   return palindrome(S,i+1);
// 	}
	
	int isPalindrome(string s)
	{
	    
	    // Your code goes here
	   int i=0;
       int j=s.size()-1;
       
       while(i<j)
       {
          
          if(s[i]!=s[j])
          {
              return 0;
          }
          
          i++;
          j--;
	    
       }
	   // if(S.length() == 1)
	   // {
	   //     return 1;
	   // }
	    
	   // int i=0;
	    
	   // if(palindrome(S,i))
	   // {
	   //     return 1;
	   // }
	   // else
	   //     return 0;
	    
	   //if(S.length() <= 1)
	   //     return 1;
	        
	   //if(S[0] == S[S.length()-1])
	   //{
	   
	   //    return isPalindrome(S.substr(1,S.length()-2));
	   //}
	   //else
	   // return 0;
	   
	   
	  return 1;  
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends