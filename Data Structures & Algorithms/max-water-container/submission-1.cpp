class Solution {
public:
    int maxArea(vector<int>& arr) {
        int mw = 0;
        int l = 0;
        int r = arr.size() - 1;
        while(l < r){
            int w = r - l;
            int h = min(arr[l],arr[r]);
            int area = w * h;
            mw = max(mw,area);
            arr[l] < arr[r] ? l++ : r--; 
        }
        return mw;
    }
};
