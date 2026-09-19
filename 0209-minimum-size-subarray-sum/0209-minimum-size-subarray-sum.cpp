class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int left = 0 ;
        int mini = INT_MAX;
        int sum = 0;

        for ( int right =  0 ;right < nums.size(); right ++){
            sum = sum + nums[right];

            while ( sum >= target ){

                int currlen= right-left +1;
                mini= min ( currlen, mini);
                sum = sum - nums[left];
                left++;



            }
        }

        if ( mini ==INT_MAX){
            return 0;

        }

        return mini ; 
        
    }
};