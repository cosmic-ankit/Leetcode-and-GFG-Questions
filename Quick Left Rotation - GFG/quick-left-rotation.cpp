//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	    if(k>n)
	    {
	        k=k%n;
	    }
	    vector<int> store(k);
	    for(int i = 0; i<k;i++)
	    {
	        store[i]=arr[i];
	    }
	    for(int i = 0; i<(n-k);i++)
	    {
	        arr[i]=arr[i+k];
	    }
	    int i = 0;
	    while(i<k)
	    {
	        arr[n-k+i]=store[i];
	        i++;
	    }
	    
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends