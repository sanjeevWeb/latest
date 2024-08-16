//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string winner(int x, int m, int n, long long arr[])
    {
        // code here
        int Ram_matches = 0;
        int Rohan_matches = 0;
        
        for(int i=0;i<x;i++){
            if(arr[i]%m == 0){
                Ram_matches++;
                arr[i] = -1;
            }
        }
        
        for(int i=0;i<x;i++){
            if(arr[i] != -1 and arr[i]%n == 0){
                Rohan_matches++;
                
            }
        }
        
        
        if(Ram_matches > Rohan_matches){
            return "Ram";
        }
        else if(Ram_matches < Rohan_matches){
            return "Rohan";
        }
        else{
            return "Both";
        }
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, m, n;
        cin>>x>>m>>n;
        long long arr[x];
        for(int i = 0;i < x;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.winner(x, m, n, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends