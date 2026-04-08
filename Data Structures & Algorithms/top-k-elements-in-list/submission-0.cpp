class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Tạo hash map và đếm số lần xuất hiện
        unordered_map<int,int> freq;

        for(auto& n : nums){
            freq[n]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);
        for(auto& [key, count] : freq){
            bucket[count].push_back(key);
        }

        vector<int> result;
        for(int i = bucket.size() - 1; i >= 0 && result.size() < k; --i){
            for(int n : bucket[i]){
                result.push_back(n);
                if(result.size() == k)
                    break;
            }
        }
        return result;
    }
};