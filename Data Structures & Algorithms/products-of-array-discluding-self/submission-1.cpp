class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        vector<int> res;
        int ctz = 0;
        for(int i = 0; i < n ; i++){
            if(nums[i] == 0){
                ctz++;
            }
        }
        for(int i = 0; i < n ; i++){
            if(nums[i] == 0){
                continue;
            }
            else{
                prod = prod * nums[i];
            }
        }
        if(ctz == 1){
            for(int i = 0 ; i < n ; i++){
                if(nums[i] == 0){
                    res.push_back(prod);
                }
                else{
                    res.push_back(0);
                }
            }
            return res;
        }
        else if(ctz > 1){
            for(int i = 0 ;i < n; i++){
                res.push_back(0);
            }
            return res;
        }
        else{
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0){
                res.push_back(prod);
            }
            else{
                int temp = prod / nums[i];
                res.push_back(temp);
            }
        }
        return res;
        }
    }
};
