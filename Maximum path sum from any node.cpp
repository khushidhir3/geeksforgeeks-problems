class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  int helper(Node*root,int& glmax){
      if(root==nullptr){
          return 0;
      }
      int left=max(0,helper(root->left,glmax));
      int right=max(0,helper(root->right,glmax));
      glmax=max(glmax,root->data+left+right);
      return root->data + max(left,right);
  }
    // Function to return maximum path sum from any node in a tree.
    int findMaxSum(Node *root) {
        // code here
        int glmax=INT_MIN;
        helper(root,glmax);
        return glmax;
    }
};
