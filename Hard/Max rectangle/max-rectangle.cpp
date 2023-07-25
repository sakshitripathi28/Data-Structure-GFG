//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
        // vector<int> Left(int n,vector<int>& heights)
        // {
        // stack<pair<int,int>> s;
        // vector<int> left;
        // int pseudo = -1;    
    
        //     for(int i=0;i<n;i++)
        //     {
        //         while(s.size() > 0 && s.top().first >= heights[i])
        //         {
        //             s.pop();
        //         }
    
        //         if(s.size() == 0)
        //         {
        //             left.push_back(pseudo);
        //         }
        //         else
        //         {
        //             left.push_back(s.top().second);
        //         }
    
        //         s.push({heights[i],i});
        //     }
    
        //     return left;
        // }
    
        // vector<int> Right(int n,vector<int>& heights)
        // {
        //     stack<pair<int,int>> s;
        //     vector<int> right;
        //     int pseudo = n;
    
        //     for(int i=n-1;i>=0;i--)
        //     {
        //         while(s.size() > 0 && s.top().first >= heights[i])
        //         {
        //             s.pop();
        //         }
    
        //         if(s.size() == 0)
        //         {
        //             right.push_back(pseudo);
        //         }
        //         else
        //         {
        //             right.push_back(s.top().second);
        //         }
    
        //         s.push({heights[i],i});
        //     }
    
        //     reverse(right.begin(),right.end());
    
        //     return right;
        // } 
        
        // int MAH(int n, vector<int>& heights) 
        // {
    
        //     vector<int> L = Left(n,heights);
        //     vector<int> R = Right(n,heights);
    
    
        //     int maxi= INT_MIN;
        //     int area= 0,weight[n];
    
        //     for(int i =0 ;i<n;i++)
        //     {
        //         weight[i] = R[i] - L[i] - 1;
        //         area = weight[i] * heights[i];
        //         maxi = max(area,maxi);
        //     }
            
        //     return maxi;
        // }
  
    int MAH(int n, vector<int>& heights) {
    stack<int> s;
    int max_area = 0;

    int i = 0;
    while (i < n) {
        if (s.empty() || heights[s.top()] <= heights[i]) {
            s.push(i);
            i++;
        }
        else {
            int top = s.top();
            s.pop();
            int area = heights[top] * (s.empty() ? i : i - s.top() - 1);
            max_area = max(max_area, area);
        }
    }

    while (!s.empty()) {
        int top = s.top();
        s.pop();
        int area = heights[top] * (s.empty() ? i : i - s.top() - 1);
        max_area = max(max_area, area);
    }

    return max_area;
}
    
    int maxArea(int M[MAX][MAX], int n, int m) {
            
    int max_area = 0;
    vector<int> heights(m, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (M[i][j] == 0) {
                heights[j] = 0;
            }
            else {
                heights[j]++;
            }
        }

        int area = MAH(m, heights);
        max_area = max(max_area, area);
    }

    return max_area;
            
        }
};



//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends