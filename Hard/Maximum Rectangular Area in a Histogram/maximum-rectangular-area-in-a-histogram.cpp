//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
     vector<int> NSL(long long arr[], int n)
    {
        vector<int>left;
        int pseudoIndex = -1;
        stack<pair<int,int>>st;
       
       for(int i=0;i<n;i++)
       {
            if(st.size()==0)
        {
            left.push_back(pseudoIndex);
        }
        else if(st.size()>0 && st.top().first < arr[i])
        {
            left.push_back(st.top().second);
        }
        else if(st.size()>0 && st.top().first >= arr[i])
        {
            
            while(st.size()>0 && st.top().first >= arr[i])
            {
                st.pop();
            }
            if(st.size()==0)
            {
                left.push_back(pseudoIndex);
            }
            else
            {
                left.push_back(st.top().second);
            }
        }
        st.push({arr[i],i});
       }
        return left;
    }
    
    
    //NSR    fun to find nearest smaller to the right
    vector<int>NSR(long long arr[], int n)
    {
        vector<int>right;
        
        int pseudoIndex = n;
        stack<pair<int,int>>st;
        
        for(int i=n-1;i>=0;i--)
        {
         if(st.size()==0)
        {
            right.push_back(pseudoIndex);
        }
        else if(st.size()>0 && st.top().first < arr[i])
        {
            right.push_back(st.top().second);
        }
        else if(st.size()>0 && st.top().first >= arr[i])
        {
            
            while(st.size()>0 && st.top().first >= arr[i])
            {
                st.pop();
            }
            if(st.size()==0)
            {
                right.push_back(pseudoIndex);
            }
            else
            {
                right.push_back(st.top().second);
            }
        }
        st.push({arr[i],i});
        }
        reverse(right.begin(),right.end());
        return right;
    }
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        
        vector<int> left = NSL(arr,n);
        vector<int> right = NSR(arr,n);
        long long ansNum = INT_MIN;
        vector<long long>ans(n, 0);
        for(int i=0;i<n;i++)
        {
            ans[i] = (right[i]-left[i]-1)*arr[i];
        }
        for(int i=0;i<n;i++)
        {
            ansNum = max(ansNum,ans[i]);
        }
        return ansNum;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends