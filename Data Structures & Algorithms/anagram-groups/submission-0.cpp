class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        
        for(string str : strs){
            string key = str;
            sort(key.begin(), key.end());

            hash[key].push_back(str);
        }

        vector<vector<string>> result;

        for(auto& [key, vec] : hash){
            result.push_back(vec);
        }

        return result;
    }
};