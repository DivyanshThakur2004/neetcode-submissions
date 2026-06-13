class Solution {
public:
    bool isPalindrome(string s) {
        string rev;
        string og;
        for(int i = 0; i < s.size();i++){
            if(isalnum(s[i])){
                s[i] = tolower(s[i]);
                rev += s[i];
                og += s[i];
            }
        }
        reverse(rev.begin(),rev.end());
        return rev == og;
    }
};
