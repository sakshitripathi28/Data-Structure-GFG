//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
   bool check_prime(int n)
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            return false;
        }
        return true;
    }
    long long int largestPrimeFactor(int N){
        // code here
        int p=0;
        for(int i=2;i<=N;i++)
        {  
            if(N%i==0 && check_prime(i))
            {
                p=i;
                N/=i;
            }
        }
        return p;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends