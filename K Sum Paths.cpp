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
    int sumK(Node *root, int k) {
        // code here
       unordered_map<int,int>sum;
       sum[0]=1;
       return countpaths(root,k,0,sum);
    }
    private:
    int countpaths(Node*root,int k,int current, unordered_map<int,int>&sum){
        if(!root)return 0;
        current+=root->data;
        int count=sum[current-k];
        sum[current]++;
      
        count+=countpaths(root->left,k,current,sum);
        count+=countpaths(root->right,k,current,sum);
        sum[current]--;
        return count;
    }
};
