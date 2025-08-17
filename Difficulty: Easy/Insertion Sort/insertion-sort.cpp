class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=1;i<n;i++){
            int j = i;
             while(j>0){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
             }
             j--;
            }
            
        }
       
    }
};