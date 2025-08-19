/*
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
*/
class Solution {
  public:
    void recInsertionSort(vector<int>&arr ,int i,int n){
        if(i==n) return;
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
        recInsertionSort(arr,i+1,n);
    }
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        recInsertionSort(arr, 0 ,n);
       
    }
};