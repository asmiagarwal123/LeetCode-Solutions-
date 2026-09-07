class NumArray {
public:
    vector<int> prefix;

    NumArray(vector<int>& nums) {

        int rows = nums.size();

        prefix = vector<int>(rows + 1, 0);

        for (int i = 0; i < rows; i++) {
            prefix[i + 1] = nums[i] + prefix[i];
        }
    }

    int sumRange(int left, int right) {

        int result = prefix[right + 1] - prefix[left];

        return result;
    }
};