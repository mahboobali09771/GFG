// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int temp = n;
        int res = 0;
        while(n!=0){
            int digit = n%10;
            res += (digit*digit*digit);
            n /= 10;
        }
        return res==temp;
    }
};