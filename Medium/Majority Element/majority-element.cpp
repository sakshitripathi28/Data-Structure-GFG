//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        //moore's voting algoritm
        //tc = O(N) sc = O(1)
        int cnt = 0;
        int ele;
        
        for(int i=0;i<size;i++)
        {
            if(cnt == 0)
            {
                cnt = 1;
                ele = a[i];
            }
            else
            {
                if(a[i] == ele)
                    cnt++;
                else
                    cnt--;
            }
        }
        
        int maxi=0;
        for(int i=0;i<size;i++)
        {
            if(a[i] == ele)
                maxi++;
        }
        
        if(maxi > (size/2))
            return ele;
        else
            return -1;
        
        
        
        
        
        
        
        
        // tc = o(n) ,sc = o(n) array contain all unique element
        // unordered_map<int,int> un;
        
        // for(int i=0;i<size;i++)
        // {
        //     un[a[i]]++;
        // }
        
        // int maxi = 0;
        // for(auto x: un)
        // {
        //     if(x.second > maxi)
        //     {
        //         maxi = max(maxi,x.second);
        //     }
        // }
        
        // if(maxi >= (size/2))
        //     return maxi;
        // else
        //     return -1;
        
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends