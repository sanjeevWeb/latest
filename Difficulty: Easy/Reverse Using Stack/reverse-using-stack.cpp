//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    
cout << "~" << "\n";
}
        return 0;
}


// } Driver Code Ends


//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    stack<char>st;
    // char ans[len];
    for(int i=0;i<len;i++){
        st.push(S[i]);
    }
    // S.clear();
    for(int i=0;i<len;i++){
        S[i] = st.top();
        st.pop();
    }
    
    return S;
}