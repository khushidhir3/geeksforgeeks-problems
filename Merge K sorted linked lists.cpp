class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        priority_queue<int,vector<int>,greater<int>>minheap;
        for(Node*node :arr){
            while(node){
            minheap.push(node->data);
            node=node->next;
        }
    }
    Node*temp=new Node(0);
    Node*cur=temp;
    while(!minheap.empty()){
        cur->next= new Node(minheap.top());
        cur=cur->next;
        minheap.pop();
    }
    return temp->next;
    }
};
