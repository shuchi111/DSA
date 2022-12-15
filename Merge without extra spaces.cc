//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            vector<long long >v1;
            
            // Inserrting 1st Array elements..
            for(int i=0 ; i<n ; i++){
                v1.push_back(arr1[i]);
            }
            
            // Inserting 2nd Array elements..
            for(int i=0 ;i<m ; i++){
                v1.push_back(arr2[i]);
            }
            
            // Sorting the whole Vector elements..
            sort(v1.begin() , v1.end());
            
            // Inserting element in 1st Array with size "n" From Vector v1..
            for(int i=0 ; i<n ; i++){
                arr1[i]= v1[i];
            }
            
            // Inserting element in 2nd Array with size "m" From Vector v1..
            for(int i=0 ; i<m ; i++){
                arr2[i]= v1[n+i];  
            }
            
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends
