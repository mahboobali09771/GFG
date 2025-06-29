/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // Your Code Here
           queue<pair<Node* , int>>q;
    map<int,int> mp;
    q.push({root, 0});
    while(!q.empty()){
        auto value = q.front();
        q.pop();
        mp[value.second]  = value.first->data;
        if(value.first->left) q.push({value.first->left , value.second - 1});

        if(value.first->right) q.push({value.first->right , value.second + 1});
    }
    vector<int>ans;
    for(auto x:mp){
        ans.push_back(x.second);
    }
    for(auto x:ans) cout<<x<<" ";
    }
};