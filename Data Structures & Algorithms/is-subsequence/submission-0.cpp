class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sl = 0,tl = 0;
        while(tl < t.length() && sl<s.length()){
            if(t[tl] == s[sl]){
                sl++;
            }
            tl++;
        }
        if(sl == s.length()){
            return true;
        }
        return false;
    }
};