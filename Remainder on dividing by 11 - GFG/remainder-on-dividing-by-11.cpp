//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++


class Solution
{

public:
    int xmod11(string x)
    {
        int length=x.size()-1;
        
        
        
        int rem = 0;
        int num = 0;
        
        
        
       for(int i = 0;i<=length;i++)
       {
           num = rem*10+(int(x[i])-48);
           rem = num%11;
           
       }
       return rem;
    
    
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends