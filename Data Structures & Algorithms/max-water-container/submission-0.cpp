class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int mw = 0;
        int width;
        int height;
        for(int i = 0; i< n ; i++){
            for(int j = i+1; j < n; j++){
                width = j - i;
                height = min(arr[i], arr[j]);
                int area = height * width;
                mw = max(mw,area);
            }
        }
        return mw;
    }
};
