class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
    int n = arr.size();
    unordered_map<int, int> m;

    // Count frequencies
    for (int x : arr) {
        if (x >= 1 && x <= n) {
            m[x]++;
        }
    }

    vector<int> v(n, 0);
    for (int i = 1; i <= n; i++) {
        v[i - 1] = m[i];
    }

    return v;


    }
};
