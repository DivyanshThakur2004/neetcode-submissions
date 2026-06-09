class Solution {
public:
    int lengthOfLastWord(string s) {
        int ctr = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                ctr++;
            } else if (i + 1 < s.length() && s[i + 1] != ' ') {
                ctr = 0;
            }
        }
        return ctr;
    }
};
