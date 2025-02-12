struct Node {
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
    // Return the Kth smallest element in the given BST
    int kthSmallest(Node *root, int k) {
        // add code here.
        stack<Node*>s;
        Node*curr=root;
        int count=0;
        while(curr!=NULL||!s.empty()){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        count++;
        if(count==k){
            return curr->data;
        }
        curr=curr->right;
    }
    return -1;
    }
};
