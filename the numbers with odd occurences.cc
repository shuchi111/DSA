//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
         long long int temp = 0;

        for(int i=0;i<N;i++) temp ^= Arr[i];

        long long int p=0;

        while(((1<<p)&temp)==0) p++;

        long long int temp1=0,temp2=0;

        for(int i=0;i<N;i++){
            if((1<<p)&Arr[i]) temp1^=Arr[i];
            else temp2 ^= Arr[i];
        }

        if(temp2>temp1) swap(temp1,temp2);
        return {temp1,temp2};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
