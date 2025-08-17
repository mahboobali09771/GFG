class Solution {
  public:
  void merge(vector<int>& arr, int l ,int mid , int r){
      int left = l;
      int right = mid+1;
      vector<int> temp(r-l+1);
      int k = 0;
      while(left<=mid && right<=r){
          if(arr[left]<=arr[right]){
              temp[k++] = arr[left];
              left++;
          }
          else{
              temp[k++] = arr[right];
              right++;
          }
      }
      while(left<=mid){
          temp[k++] = arr[left];
          left++;
      }
      while(right<=r){
          temp[k++] = arr[right];
          right++;
      }
      for(int i=0;i<temp.size();i++){
          arr[l+i] = temp[i];
      }
  }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l>=r) return;
        int n = arr.size();
        int mid = (l+r)/2;
        
      mergeSort(arr,l,mid);
      mergeSort(arr,mid+1,r);
    
      merge(arr,l,mid,r);
    
    }
};