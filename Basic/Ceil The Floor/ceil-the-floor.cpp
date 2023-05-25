//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
     int mn = INT_MIN,mx = INT_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i] <= x && arr[i] > mn){
            mn = arr[i];
        }
        if(arr[i] >= x && arr[i] < mx){
            mx = arr[i];
        }
    }
    if(mn == INT_MIN) mn = -1;
    else if(mx == INT_MAX) mx = -1;
    
    return {mn,mx};
}