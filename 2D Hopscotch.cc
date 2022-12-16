//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int hopscotch(int n, int m, vector<vector<int>> mat, int ty, int i, int j)
    {
        // code here
        if(ty==0)
        {
           // vector<pair<int,int>> move = {{-1,0},{0,-1},{1,-1},{1,0},{1,1},{0,1}};
            vector<int> x = {-1,-1,0,1,0,-1};
            vector<int> y = {-1,0,-1,0,1,1};
            int sum = 0;
            if(j%2==0)
            {
            for(int t=0;t<6;t++)
            {
                int a = i+x[t];
                int b = j+y[t];
                if(a>=0 && a<n && b>=0 && b<m)
                {
                    sum+=mat[a][b];
                }
            }
            }
            else
            {
                for(int t=0;t<6;t++)
                {
                    x[t]=-1*x[t];
                    y[t]=-1*y[t];
                }
                for(int t=0;t<6;t++)
                {
                int a = i+x[t];
                int b = j+y[t];
                    if(a>=0 && a<n && b>=0 && b<m)
                    {
                        sum+=mat[a][b];
                    }
                }
            }
            return sum;
        }
        else
        {
            vector<int> x = {-2,-2,-2,1,2,1,-1,0,1,-1,0,1};
            vector<int> y = {0,-1,1,-1,0,1,-2,-2,-2,2,2,2};
            int sum = 0;
            if(j%2==0)
            {
            for(int t=0;t<12;t++)
            {
                int a = i+x[t];
                int b = j+y[t];
                if(a>=0 && a<n && b>=0 && b<m)
                {
                    sum+=mat[a][b];
                }
            }
            }
            else
            {
                for(int t=0;t<12;t++)
                {
                    x[t]=-1*x[t];
                    y[t]=-1*y[t];
                }
                for(int t=0;t<12;t++)
                {
                int a = i+x[t];
                int b = j+y[t];
                    if(a>=0 && a<n && b>=0 && b<m)
                    {
                        sum+=mat[a][b];
                    }
                }
            }
            return sum;

    }
 
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, ty, i, j;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin>>mat[i][j];
        cin>>ty>>i>>j;
        
        Solution ob;
        cout<<ob.hopscotch(n, m, mat, ty, i, j)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
