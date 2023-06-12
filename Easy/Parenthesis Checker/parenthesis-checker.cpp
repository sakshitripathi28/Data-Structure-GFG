//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string y)
    {
        // Your code here
        stack<char> s;
        for(int i=0;i< y.size();i++)
        {
            char x = y[i];
            if(x =='[' || x == '{' || x == '(')
            {
                s.push(x);
            }
            else if(x ==']' || x == '}' || x == ')')
            {
                if(!s.empty())
                {
                    char top = s.top();
                    if((x == ')' && top == '(' ) || (x == '}' && top == '{' ) || (x == ']' && top == '[' ) )
                    {
                        s.pop();
                    }
                    else
                        return false;
                }
                else 
                    return false;
                
            }
        }
        if(s.empty())
            return true;
        else
            return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends