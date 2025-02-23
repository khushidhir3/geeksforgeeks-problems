class Solution {
  public:
    // Function to find the next greater element for each element of the array.
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>res(n,-1);
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty()&&arr[i]>arr[s.top()]){
                int index=s.top();
                s.pop();
                res[index]=arr[i];
            }
            s.push(i);
        }
        return res;
    }
};
