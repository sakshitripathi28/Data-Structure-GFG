//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}


// } Driver Code Ends

bool countString(char S[],int i,int j)
{
    while(i<j)
    {
        if(S[i]==S[j])
        {
        i++;
        j--;
        }
        else
        return 0;
    }
    return 1;
}

int CountPS(char S[], int N)
{
    //code here
    int count =0;
    for(int i=0;i<N;i++)
    {
        // int oddsubstring = countString(S,i,i,N);
        // count += oddsubstring;
        for(int j = i+1;j<N;j++)
        {
            if(countString(S,i,j))
                count++;;
        }
        
        
    }
    
    return count;
    
    
}