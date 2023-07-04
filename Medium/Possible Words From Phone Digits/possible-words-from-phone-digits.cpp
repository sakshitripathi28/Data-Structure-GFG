//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void solve(int a[], int index,int N,string mapping[],string output,vector<string> &ans)
    {
        if(index == N)
        {
            // if(output.size() == N)
            // {
                ans.push_back(output);
            //}
            return;
        }
        
        int ele = a[index];
        string value = mapping[ele];
        
        for(int i=0;i<value.size();i++)
        {
            output.push_back(value[i]);
            solve(a,index+1,N,mapping,output,ans);
            output.pop_back();
        }
    }
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string> ans;
        string output = "";
        
        // int n = sizeof(a)/sizeof(a[0]);
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index = 0;
        
        solve(a,index,N,mapping,output,ans);
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends