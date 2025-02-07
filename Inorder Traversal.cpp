class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
   vector<int>  inOrder(Node* root) {
        // Your code here
        vector<int>result;
        second(root,result);
        return result;
       
   }
   private:
   void second(Node*root,vector<int>& result){
        if(root==nullptr){
            return ;
        }
        second(root->left,result);
        result.push_back(root->data);
        second(root->right,result);
        
    }
};
