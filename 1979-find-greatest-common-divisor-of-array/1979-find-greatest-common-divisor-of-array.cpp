class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = nums[0];
        int mx = nums[0];

        for (int x : nums) {
            mn = min(mn, x);
            mx = max(mx, x);
        }

        while (mx != 0) {
            int remainder = mn % mx;
            mn = mx;
            mx = remainder;
        }

        return mn;
    }
};