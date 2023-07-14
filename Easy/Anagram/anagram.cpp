//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string s, string t){
        
        // Your code here
        
        if (s.length() != t.length()) return false;
        int arr[26] = {0};

        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }

        for(int i=0;i<26;i++)
        {
            if(arr[i] != 0)
                return false;
        }

        return true;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends