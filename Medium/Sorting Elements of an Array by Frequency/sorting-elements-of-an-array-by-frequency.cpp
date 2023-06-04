#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>& a,pair<int,int>& b)
{
    if(a.first > b.first)
        return true;
    else if(a.first < b.first)
        return false;
    else if(a.first == b.first)
    {
        if(a.second < b.second)
            return true;
        else
            return false;
    }
}

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    unordered_map<int ,int> m;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        m[arr[i]]++;
	    }
	    
	   vector<pair<int ,int>> v;
	   for(auto x : m)
	   {
	       v.push_back({x.second,x.first});
	   }
	   
	   sort(v.begin(),v.end(),cmp);
	   
	   for(auto x: v)
	   {
	       for(int i=0;i<x.first;i++)
	       {
	           cout<<x.second<<" ";
	       }
	   }
	   
	   cout<<endl;
	   
	}
	
	
	return 0;
}