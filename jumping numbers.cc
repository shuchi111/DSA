//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  void jumper(string temp,int y,long long &ans,long long &minDiff,long long x)

    {

        long long val=0;

        for(int i = 0; i < temp.size(); i++)

        val = val * 10 + temp[i] - '0';

        if(val>1e9)

        return;

        if(x-val<minDiff && val<=x)

        {

            minDiff=x-val;

            ans=val;

        }

        if(y+1<=9 && y>=1)

        

        {

            char ch1=(y+1)+'0';

            jumper(temp+ch1,y+1,ans,minDiff,x);

            char ch2=(y-1)+'0';

            jumper(temp+ch2,y-1,ans,minDiff,x);

        }

        else if(y+1<=9)

        {

            char ch1=(y+1)+'0';  

            jumper(temp+ch1,y+1,ans,minDiff,x);

        }

        else if(y>=1)

        {

            char ch2=(y-1)+'0';

            jumper(temp+ch2,y-1,ans,minDiff,x);

        }

    }

    long long jumpingNums(long long x) {

       long long ans;long long minDiff=INT_MAX;

       for(int i=1;i<=9;i++)

       {

           string temp="";

           temp+=(i+'0');

           if(i+1<=9)

           jumper(temp,i,ans,minDiff,x);

           jumper(temp,i,ans,minDiff,x);

       }

    

       return ans;
    }
};

//{ Driver Code Starts
    






//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends
