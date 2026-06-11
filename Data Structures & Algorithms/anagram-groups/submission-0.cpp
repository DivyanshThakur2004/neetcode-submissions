class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<bool> vis(n,false);
        vector<vector<string>> res;
        for(int i = 0 ; i < n ; i++){
            if(vis[i]){
                continue;
            }
            string s = strs[i];
            vector<string> temp;
            temp.push_back(s);
            vis[i] = true;
            sort(s.begin(),s.end());
            for(int j = i+1; j < n; j++){
                if(vis[j] == true){
                    continue;
                }
                string t = strs[j];
                sort(t.begin(),t.end());
                if(s == t){
                    temp.push_back(strs[j]);
                    vis[j] = true;
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};
