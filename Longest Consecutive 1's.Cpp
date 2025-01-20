class Solution {
public:
    int maxConsecutiveOnes(int N) {
        int maxc=0, cur=0;
        while (N>0) {
            if(N%2==1){
                cur++;
                maxc=max(maxc,cur);
            } else{
                cur= 0;
            }
            N/=2; 
        }
        return maxc;
    }
};
