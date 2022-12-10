//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        // code here
        vector<int>v;
        int l=0;
        int r=C-1;
        int t=0;
        int d=R-1;
        int dir=0;
        while(r>=l && d>=t)
        {
            
            if(dir==0)
            {
            for(int i=l;i<=r;i++)
            {
                v.push_back(a[t][i]);
               
            }
             t++;
            }
            
            if(dir==1)
            {
                
            
            for(int i=t;i<=d;i++)
            {
                v.push_back(a[i][r]);
               
            }
             r--;
            }
             if(dir==2)
             {
            for(int i=r;i>=l;i--)
            {
                v.push_back(a[d][i]);
                
                
            }
            d--;
             }
             if(dir==3)
             {
            for(int i=d;i>=t;i--)
            {
                  v.push_back(a[i][l]);
                 
            }
             l++;
             } 
            
            dir=(dir+1)%4;
        }
        
        reverse(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends
                
           
 

