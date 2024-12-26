//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int equilibriumPoint(vector<int> &a) {
        // code here
        int n = a.size();
        long long int sum = 0;
        long long int leftsum = 0;
        for(int i=0;i<n;i++){
            sum += a[i];
        }
        
        for(int i=0;i<n;i++){
            sum -= a[i];
            if(sum == leftsum){
                return i+1;
            }
            leftsum += a[i];
        }
       
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.equilibriumPoint(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends