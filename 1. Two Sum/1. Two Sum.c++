class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
                std::unordered_map<int, int> map;
        
        // Fill the HashMap
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]] = i;
        }
        
        // Searching
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int rem = target - num;
            if (map.find(rem) != map.end()) {
                int index = map[rem];
                if (index == i) continue;
                return {i, index};
            }
        }
        
        return {};
    }

};