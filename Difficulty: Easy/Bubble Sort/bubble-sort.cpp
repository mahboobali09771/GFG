/*
class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
};
*/
class Solution {
  public:
    void recursiveBubbleSort(vector<int>& arr,int n){
        if(n==1) return;
        int count = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                count++;
            }
        }
        if(count==0) return;
        recursiveBubbleSort(arr,n-1);
    }
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        recursiveBubbleSort(arr,n);
    }
};