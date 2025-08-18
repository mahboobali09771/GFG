class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
         priority_queue<int, vector<int>, greater<int> > pq;
         int minCost = 0;
        for(int ele : arr){ // TC->O(nlogn)
            pq.push(ele);
        }
        while(pq.size()>1){ // TC->O(nlogn)
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            minCost += (x+y);
            pq.push(x+y);
        }
        if(pq.size()==1) return minCost;
        else return 0;
    }
};