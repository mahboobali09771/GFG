class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int largest = arr[0];
         for(int i=0;i<n;i++)  if(arr[i]>largest) largest = arr[i];
             int secondLar = -1;
             for(int j=0;j<n;j++)  if(arr[j]>secondLar && arr[j]!=largest) secondLar = arr[j];

        
            return secondLar;
    }
};