class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        dfs(root,0);
        return result;
    }
        vector<vector<int>>result;
       void dfs(Node*node,int level){
           if(!node)return;
           if(result.size()==level){
               result.push_back({});
           }
           result[level].push_back(node->data);
           dfs(node->left,level+1);
           dfs(node->right,level+1);
       
     
        
    }
};
