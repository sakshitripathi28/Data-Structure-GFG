//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void solve(vector<int> &arr, int index, int sum,int target,vector<int> &output,vector<vector<int>> &ans)
    {
    	if(sum == target)
    	{
    	    ans.push_back(output);
    	    return;
    	    
    	}
    	
    	if(sum > target) return;
    	if(index == arr.size()) return;
    	//exclude
    	while(index+1 < arr.size() && arr[index] == arr[index+1]) index++;
    	solve(arr,index+1,sum,target,output,ans);
    
    	//include
    	int ele = arr[index];
    	output.push_back(ele);
    	sum = sum + ele;
    	solve(arr, index , sum, target,output,ans);
    	sum -= arr[index];
    	output.pop_back();
    }
    
    vector<vector<int> > combinationSum(vector<int> &arr, int target) {
        // Your code here
        
    vector<vector<int>> ans;
	vector<int> output;
    
    sort(arr.begin(),arr.end());
	int index = 0;
	int sum = 0;
	solve(arr,index,sum,target,output,ans);
	sort(ans.begin(),ans.end());

	return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends