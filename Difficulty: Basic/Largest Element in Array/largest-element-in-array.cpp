class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int mx = arr[0];
        int i=0;
        while(n>0){
            if(arr[i]>mx) mx = arr[i];
                i++;
                n--;
        }
        return mx;
    }
};
