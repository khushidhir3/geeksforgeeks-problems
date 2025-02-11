Class solution{
public:
    // Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) {
        // Your code here
        return isbst(root,LONG_MIN,LONG_MAX);
    }
    private:
    bool isbst(Node*node,long minval,long maxval){
        if(node==nullptr){
            return true;
        }
        if(node->data<-minval||node->data>=maxval){
            return false;
        }
        return isbst(node->left,minval,node->data)&&isbst(node->right,node->data,maxval);
    }
};
