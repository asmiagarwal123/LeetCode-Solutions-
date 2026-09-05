class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> left;
        vector<int> right;
        vector<int> result;

        int product = 1;

        for (int i = 0; i < n; i++) {
            left.push_back(product);
            product = product * nums[i];
        }

        product = 1;

        for (int i = n - 1; i >= 0; i--) {
            right.push_back(product);
            product = product * nums[i];
        }

        reverse(right.begin(), right.end());

        for (int i = 0; i < n; i++) {
            result.push_back(left[i] * right[i]);
        }

        return result;
    }
};