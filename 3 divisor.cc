//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        // Write your code here
          vector<long long int>v;

        long long int p=999990;

        long long int arr[p]={0};

        long long int i,j;

        for(i=2;i<=sqrt(p);i++)

        {

            if(arr[i] == 0){

            for(j=i*i;j<=p;j+=i)

            arr[j]=1;}

        }

        for(i=2;i<=p;i++)

        {

            if(arr[i] == 0)

            v.push_back(i);  // vec of prime no.

        }

        vector<int>fin;

        for(i=0;i<query.size();i++)

        {

            

            long long int target=query[i],c=0,index;

            if(target == 2 || target == 1)

            fin.push_back(0);

            else if (target == 3)

            fin.push_back(0);

            else{

            long long int l=0,r=v.size()-1,m=(l+r)/2;

            while(l<=r)

            {

                if(v[m]*v[m] < target)

                {

                    c++;

                    index=m;

                    l=m+1;

                }

                else if (v[m]*v[m] ==  target)

                {

                    c++;

                    index=m;

                    break;

                }

                else if (v[m]*v[m] > target)

                {

                    r=m-1;

                }

                m=(l+r)/2;

            }

            if(c>0)

            fin.push_back(index+1); }

        }

        return fin;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends
