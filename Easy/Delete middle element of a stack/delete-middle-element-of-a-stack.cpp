//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void solve(stack<int>&s, int mid,int &k)
    {
        if(mid == k)
        {
            s.pop();
            return;
        }
        
        int ele = s.top();
        s.pop();
        k++;
        solve(s,mid,k);
        s.push(ele);
        
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here..
        int mid = 0;
        
        if(sizeOfStack % 2 == 0)
        {
            mid = (sizeOfStack+2)/2;
        }
        else
        {
            mid = (sizeOfStack+1)/2;
        }
        
        int k = 1;
        solve(s,mid,k);
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends