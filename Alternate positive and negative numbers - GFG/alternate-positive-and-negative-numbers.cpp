//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n)
	{
	    vector<int> pos;
	    vector<int> neg;
	    
	    for(int i = 0; i<n; i++)
	    {
	        if(arr[i]>=0)
	        {
	            pos.push_back(arr[i]);
	        }
	        else 
	        {
	            neg.push_back(arr[i]);
	        }
	        
	        
	    }
	    
	    int count = 0;
	    int i = 0;
	    int plen = pos.size()-1;
	    int nlen = neg.size()-1;
	    while(count<n)
	    {
	        if(i<=plen)
	        {
	        arr[count]=pos[i];
	        count++;
	            
	        }
	        if(i<=nlen)
	        {
	        arr[count]=neg[i];
	        count++;
	            
	        }
	        i++;
	       
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends