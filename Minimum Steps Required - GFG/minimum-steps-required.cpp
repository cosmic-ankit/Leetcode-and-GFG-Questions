//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) 
{
int count = 0;
char first=str[0];
char save=str[0];
int length = str.size()-1;
for(int i = 1;i<=length;i++)
{
    
    
        if(str[i]==save)
        {
            continue;
        }
        else
        {
            save=str[i];
            if(str[i]==first)
            {
                continue;
            }
           else
           { 
               count++;
           }
        }
    
}
return count+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends