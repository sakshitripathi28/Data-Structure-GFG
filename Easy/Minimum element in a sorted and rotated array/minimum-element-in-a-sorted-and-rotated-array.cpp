//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        
        int low = 0,high = n-1;
        if(arr[0]<arr[n-1]){
            return arr[0];
        }
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            
            if(arr[mid] < arr[mid-1])
                return arr[mid];
            else if(arr[mid] > arr[mid+1])
                return arr[mid+1];
            else if (arr[mid] >= arr[low])
                low = mid+1;
            else if(arr[mid] <= arr[high])
                high = mid-1;
        }
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends