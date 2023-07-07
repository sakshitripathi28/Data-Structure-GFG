//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
        vector<vector<int>> sol;
 bool isSafe(vector<vector<int>>&v,int x,int y,int n)
 {
     
     for(int row=0;row<x;row++)
     {
         if(v[row][y]==1)
         return false;
     }
     int row=x;
     int col=y;
     while(row>=0&&col>=0)
     {
         
         if(v[row][col]==1)
         return false;
         row--;
         col--;
     }
     
     row=x;
     col=y;
      while(row>=0&&col<n)
     {
         
         if(v[row][col]==1)
         return false;
         row--;
         col++;
     }
     return true;
     
 }

    bool NQueens(vector<vector<int>>&v,int x,int n,vector<int> &temp)
     {
         if(x>=n)
         {
             sol.push_back(temp);
         }
         for(int col=0;col<n;col++)
         {
             if(isSafe(v,x,col,n)){
                 
                 v[x][col]=1;
                 temp.push_back(col+1);
                 if(NQueens(v,x+1,n,temp))
                { 
                    return true;
                }
                 v[x][col]=0;//to backtrack the path 
                 temp.pop_back();
             }
             
         }
         return false;
       
     }
    vector<vector<int>> nQueen(int n) {
        // code here
        
        vector<vector<int>> v(n,vector<int>(n,0));
        vector<int> temp;
        NQueens(v,0,n,temp);
        return sol;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends