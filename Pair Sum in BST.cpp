class Solution {
  public:
    bool findTarget(Node *root, int target) {
        // your code here.
        vector<int>v;
        inordertraversal(root,v);
        int left=0;
        int right=v.size()-1;
        while(left<right){
            int sum=v[left]+v[right];
            if(sum==target){
                return true;
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return false;
    }
    private:
    void inordertraversal(Node*root,vector<int>& v){
        if(!root)return;
        inordertraversal(root->left,v);
        v.push_back(root->data);
        inordertraversal(root->right,v);
    }
};
