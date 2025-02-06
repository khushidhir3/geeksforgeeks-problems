Definition of the Node class
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to build the tree from given inorder and preorder traversals
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // code here
        int pi=0;
        vector<Node*>stack;
        Node*root=new Node(preorder[pi++]);
        stack.push_back(root);
        for(int i=0,j=0;pi<preorder.size();){
            Node*node=nullptr;
            while(!stack.empty()&&stack.back()->data==inorder[j]){
                node=stack.back();
                stack.pop_back();
                j++;
            }
            Node* newNode=new Node(preorder[pi++]);
            if(node){
                node->right=newNode;
            }
            else{
                stack.back()->left=newNode;
            }
            stack.push_back(newNode);
        }
        return root;
    }
};
