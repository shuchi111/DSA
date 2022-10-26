//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findMin(int n, char a[]){
        int rc=0,bc=0,gc=0;
       for(int i=0;i<n;i++)
       {
           if(a[i]=='R')
           rc++;
           else if(a[i]=='G')
           gc++;
           else
           bc++;
       }

//when there is only one color present for n times.
       if(rc==0 && gc==0 || rc==0&&bc==0 || gc==0 &&        bc==0)
       return n;

// when all three colors are even.
       else if(gc%2==0 && rc%2==0 && bc%2==0)
       return 2;

//when all three colors are odd.
        else if(gc%2!=0 && rc%2!=0 && bc%2!=0)
       return 2;

//for all other cases
       else
       return 1;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        cout<<ob.findMin(n, a)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
