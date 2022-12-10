//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        queue<pair<int,int>> q;
        q.push({source});
        grid[source.first][source.second]=0;
        if(source==destination) return 0;
        int delrow[]={-1,0,0,1};
        int delcol[]={0,1,-1,0};
        int level=0;
        while(!q.empty())
        {
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                auto temp = q.front();
                q.pop();
                int x=temp.first;
                int y=temp.second;
                for(int i=0;i<4;i++)
                {
                    int nrow=temp.first+delrow[i];
                    int ncol= temp.second+delcol[i];
                    if(nrow>=0 && nrow< grid.size() && ncol>=0 && ncol<grid[0].size() && grid[nrow][ncol]==1)
                    {
                        if(destination.first==nrow && destination.second==ncol) return level+1;
                        q.push({nrow,ncol});
                        grid[nrow][ncol]=0;
                    }
                }
            }
            level++;
        }
        return -1;
    }
};
 



//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends
