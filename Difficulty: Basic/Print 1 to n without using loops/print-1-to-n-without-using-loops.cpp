// User function Template for C++
class Solution {
  public:
    void printTillN(int n) {
        // Write Your Code here
        if(n==0) return;
        printTillN(n-1);
        cout<<n<<" ";
    }
};