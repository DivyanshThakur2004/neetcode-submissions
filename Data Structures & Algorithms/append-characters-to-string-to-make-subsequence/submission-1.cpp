class Solution {
public:
    int appendCharacters(string s, string t) {
        int tl = 0, sl = 0;
        while(sl < s.length() && tl < t.length()){
            if(s[sl] == t[tl]){
                tl++;
            }
            sl++;
        }
        if(tl == t.length()){
            return 0;
        }
        else{
            int res = t.length() - tl;
            return res;
        }
    }
};