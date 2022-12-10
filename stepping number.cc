//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:

    int steppingNumbers(int n, int m)
    {
        // Code Here
          queue<int> q;

        for(int i=1;i<10;i++){

            q.push(i);

        }

        int ans=0;

        if(n==0)

        ans++;

        while(q.empty()==false && q.front()<=m){

            int t=q.front(),c,b;

             if(t>=n && t<=m)

             ans++;

            q.pop();

            if(((t%10)-1)>=0){

                c=10*t+((t%10)-1);

                 if(c<=m){

                q.push(c);

               

            }

            }

             if(((t%10)+1)>=0){

                 if(t%10==9){

                   continue;

                 }

                 else{

                b=10*t+((t%10)+1);

                  if(b<=m){

                q.push(b);

                 }

            }

            

            }

        }

        return ans;

    }

};



//{ Driver Code Starts.

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        Solution obj;
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}


// } Driver Code Ends
