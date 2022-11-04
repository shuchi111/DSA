//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxGroupSize(int arr[], int N, int K) {
        // code here
         vector<int> s(K);
        for(int i=0; i<N; i++) s[arr[i]%K]++;
        // for(int i=0; i<K; i++) cout<<s[i]<<" ";
        
        int ans=0, m=K/2;
        if(s[0]>0)ans=1;
        for(int i=1; i<m;i++) ans+=max(s[i],s[K-i]);
        
        if(m+m+1==K){
            if((s[m]+s[m+1])>0)ans+=max(s[m],s[m+1]);
        }else if(s[m]>0) ans+=1; 
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxGroupSize(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends
