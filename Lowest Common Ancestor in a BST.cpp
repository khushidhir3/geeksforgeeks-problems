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
    Node* LCA(Node* root, Node* n1, Node* n2) {
        // code here
        if(root==NULL){
            return NULL;
        }
        if(root->data==n1->data||root->data==n2->data){
            return root;
        }
        Node*left=LCA(root->left,n1,n2);
        Node*right=LCA(root->right,n1,n2);
        if(left!=NULL&&right!=NULL){
            return root;
        }
        return (left!=NULL)?left:right;
    }
};
