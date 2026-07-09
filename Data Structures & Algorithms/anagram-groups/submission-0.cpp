class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <string, vector<string>> groups;
        for(auto str : strs){
            vector<int> count(26, 0);
            for(auto c : str){
                count[c - 'a']++;
            }
        

            string key = "";
            for (int i = 0; i < 26; i++) {
                key += to_string(count[i]) + '#';
            }


            groups[key].push_back(str);
        }    
        vector<vector<string>> a;
        for(auto &pair: groups){
            a.push_back(pair.second);
        }
        return a;
    }
};
