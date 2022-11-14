//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
        
        vector<int>low(N);
        vector<int>high(N);
        low[N-1]=1;
        high[N-1]=1;
        for(int i=N-2;i>=0;i--)
        {
            if(arr[i] +1== arr[i+1])//arr[i] < arr[i+1]
            {
                low[i]=high[i+1]+1;
                high[i]=1;
            }
            else if(arr[i]==1+arr[i+1])//arr[i]>arr[i+1]
            {
                high[i]=low[i+1]+1;
                low[i]=1;
            }
            else if(arr[i]==arr[i+1])
            {
                low[i]=low[i+1]+1;
                high[i]=high[i+1]+1;
            }
            else
            {
                low[i]=1;
                high[i]=1;
            }
        }
        int ans=0;
        for(int i=0;i<N;i++)
        {
            ans=max(ans,low[i]);
        }
        for(int i=0;i<N;i++)
        {
            ans=max(ans,high[i]);
        }
        return ans;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends
