class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp;   // value -> index

        for (int i = 0; i < nums.size(); i++) {

            int needed = target - nums[i];

            // Check if the required number has already been seen
            if (mp.find(needed) != mp.end()) {
                return {mp[needed], i};
            }

            // Store the current number and its index
            mp[nums[i]] = i;
        }

        return {};
    }
};