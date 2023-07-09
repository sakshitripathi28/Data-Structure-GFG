//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        vector<long long> row;
        long long int mod = 1e9+7;
        if(n==1)
        {
        row.push_back(1);
        return row;
        }
        
        for(int i=0; i<n; i++){
            vector<ll>temp(i+1, 1);
            for(int j=1; j<i; j++){
                temp[j]= (row[j] + row[j-1]) % mod;
            }
            row=temp;
        }
        
        // long long int ans = 1;
        // row.push_back(ans);
        // for(int col = 0;col < n-2;col++)
        // {
        //     ans = ans * (n-1 - col);
        //     ans = ans / (col+1);
        //     ans = ans % mod;
        //     row.push_back(ans);
        // }
        // if(n>1)
        // {
        //     row.push_back(1);
        // }
        return row;
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends