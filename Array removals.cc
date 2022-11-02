//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends



// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& arr, int k){
        //Code here
           sort(arr.begin() , arr.end());
        int res = 0;
        int i = 0 , j = 0;
        while(i <= j && j < arr.size())
        {
            if(arr[j] - arr[i] > k)
                i++;
            else
            {
                res = max(res , (j - i + 1));
                j++;
            }
        }
        return arr.size() - res;
    }
};



//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends
