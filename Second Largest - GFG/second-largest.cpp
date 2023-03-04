//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) 
	{
	    if(n<2)
	    {
	        return -1;
	    }
	   int store1=max(arr[0],arr[1]);
	   int store2=min(arr[0],arr[1]);
	    
	    
	    for(int i = 2;i<=n-1;i++)
	    {
	        if(store2==store1)
	    {
	        store2=-1;
	    }
	        if(arr[i]>store1)
	        {
	            store2 = store1;
	            store1=arr[i];
	        }
	        else if (arr[i]>store2&&arr[i]<store1)
	        {
	            store2=arr[i];
	        }
	    }
	    
	    
	    
	    return store2;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends