//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool search(vector<vector<char>>& board,int m,int n,int i,int j,string word,int k)
    {
        if(k == word.size())
            return true;

        if(i < 0 || i==m || j<0 || j==n || board[i][j] != word[k])
            return false;

        char ch = board[i][j];
        board[i][j] = '#';
        //down
        bool opt1 = search(board,m,n,i+1,j,word,k+1);
        bool opt2 = search(board,m,n,i,j-1,word,k+1);
        bool opt3 = search(board,m,n,i,j+1,word,k+1);
        bool opt4 = search(board,m,n,i-1,j,word,k+1);

        board[i][j] = ch;

        return opt1 || opt2 || opt3 || opt4;
    }
    
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        
        int m = board.size();
        int n = board[0].size();

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j] == word[0])
                {
                    if(search(board,m,n,i,j,word,0))
                    {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends