//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
   long long sum = 0;
    long long sumOfSeries(long long N)
    {
        if(N==0)
        {
            return sum;
        }
        sumOfSeries(N-1);
        
        sum = sum+(N*N*N);
        
        return sum;
        
        
      
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends