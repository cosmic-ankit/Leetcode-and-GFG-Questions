//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
        sort(arr,arr+n);
        if(arr[n-1]<0)
        {
            return arr[n-1]*arr[n-2]*arr[n-3];
        }
        long long front = arr[0]*arr[1];
        long long end = arr[n-2]*arr[n-3];
        
        if(front<=end)
        {
            return end*arr[n-1];
            
        }
        else
        {
            return front*arr[n-1];
        }
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends