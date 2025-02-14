class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
     Node* first=NULL;
      Node*second=NULL;
      Node*prev=NULL;
    void correctBST(Node* root) {
        // add code here.
        inorder(root);
        if(first!=NULL&& second!=NULL){
            swap(first->data,second->data);
    }
     }
     void inorder(Node*root){
         if(root==NULL){
             return;
         }
     
      inorder(root->left);
    if(prev!=NULL && root->data<prev->data){
        if(first==NULL){
            first=prev;
        }
        second=root;
    }
    prev=root;
    inorder(root->right);
     }
    
};
