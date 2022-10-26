//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        bool dfs(vector<int>adj[],int node,vector<int>vis,int cnt){
        if(cnt==(vis.size()-1))
        return true;
        vis[node]=1;
        cnt+=1;
        for(auto i:adj[node]){
            if(!vis[i])
            if(dfs(adj,i,vis,cnt))
            return true;
        }
        return false;
    }
    bool check(int n,int m,vector<vector<int>> edges)
    {
       
        vector<int>adj[n+1];
        for(auto i:edges){
            int x=i[0];
            int y=i[1];
            
            
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int cnt=1;
        vector<int>vis(n+1,0);
        for(int i=1;i<=n;i++){
            if(dfs(adj,i,vis,cnt))
            return true;
        }
        return false;
        
    }
};

 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}
// } Driver Code Ends
