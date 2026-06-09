class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ctr = 0;
        int maxc = 0;
        for(int i = 0 ; i < n; i++){
            if(nums[i] == 1){
                ctr++;
            }
            else if(nums[i] == 0){
                maxc = max(maxc,ctr);
                ctr = 0;
            }
        }
        maxc = max(maxc,ctr);
        return maxc;
    }
};