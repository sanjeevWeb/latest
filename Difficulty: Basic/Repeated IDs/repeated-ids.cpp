//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

vector<int> uniqueId(int a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> ans = uniqueId(a, n);
        for (it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends



vector<int> uniqueId(int a[], int n) {
    unordered_map<int, int>m;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(m[a[i]]==0){
              m[a[i]]++;
              v.push_back(a[i]);
            } 
        }
        return v;
}