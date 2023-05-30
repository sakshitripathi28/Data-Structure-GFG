//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int low = 0,high = n-1;
    int ans = -1;
    vector<int> v;
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        
        if(x == arr[mid])
        {
            ans = mid;
            high = mid -1;
        }
        else if(x < arr[mid])
            high = mid -1;
        else
            low = mid +1;
    }
    
    v.push_back(ans);
    
    low = 0,high = n-1;
    ans = -1;
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        
        if(x == arr[mid])
        {
            ans = mid;
            low = mid +1;
        }
        else if(x < arr[mid])
            high = mid -1;
        else
            low = mid +1;
    }
    
    v.push_back(ans);
    
    return v;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends