//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
    int row_change[8] = {-1, -1, 0, 1, 1, 1 ,0 ,-1};
    int col_change[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    
    bool isPresent(int x, int y, vector<vector<char>> &grid, int idx, string word, int x_dir, int y_dir) {
        if (idx == word.length())
            return true;
        
        if (x<0 or y<0 or x>=grid.size() or y>=grid[0].size())
            return false;
        
        if (word[idx] != grid[x][y]) return false;
        else return isPresent(x+x_dir, y+y_dir, grid, idx+1, word, x_dir, y_dir);
    }
public:
    vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        set<pair<int,int>> s;
        
        for (auto i=0; i<n; i++) {
            for (auto j=0; j<m; j++) {
                if (grid[i][j] == word[0]) {
                    for (auto p=0; p<8; p++) {
                        if (isPresent(i, j, grid, 0, word, row_change[p], col_change[p]))
                            s.insert({i, j});
                    }
                }
            }
        }
        
        vector<vector<int>> v;
        for (auto p: s) {
            v.push_back({p.first, p.second});
        }
        
        return v;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends