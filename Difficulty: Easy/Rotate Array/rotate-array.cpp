//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        d=d%n;
    // Storing rotated version of array
    int temp[n];

    // Keeping track of the current index
    // of temp[]
    int k = 0;

    // Storing the n - d elements of
    // array arr[] to the front of temp[]
    for (int i = d; i < n; i++) {
        temp[k] = arr[i];
        k++;
    }

    // Storing the first d elements of array arr[]
    //  into temp
    for (int i = 0; i < d; i++) {
        temp[k] = arr[i];
        k++;
    }

    // Copying the elements of temp[] in arr[]
    // to get the final rotated array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends