class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n1 = s.size();
        int n2 = t.size();
        if(n1 != n2)
        {
            return false;
        }
        int i = 0,j = 0;
        while(i < n1 && j < n2){
            if(s[i] != t[i]){
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};
