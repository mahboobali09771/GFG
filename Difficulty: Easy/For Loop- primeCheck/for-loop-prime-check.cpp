//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string isPrime(int n) {
        if(n<=1) return "No";
        if(n==2) return "Yes";
        int count = 0;
        for (int i = 2; i <= sqrt(n); i++) {
            if(n%i==0) count++;
        }
        if(count==0) return "Yes";
        else return "No";
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;

        Solution obj;
        string res = obj.isPrime(n);

        cout << res << "\n";

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends