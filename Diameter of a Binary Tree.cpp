class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
  public:
  int diameter(Node* root, int &maxdiameter){
      if(!root) return 0;
      int left=diameter(root->left,maxdiameter);
      int right=diameter(root->right,maxdiameter);
      maxdiameter=max(maxdiameter,left+right);
      return 1+max(left,right);
  }
    int diameter(Node* root) {
        // Your code here
        int maxdiameter=0;
        diameter(root, maxdiameter);
        return maxdiameter;
    }
};
