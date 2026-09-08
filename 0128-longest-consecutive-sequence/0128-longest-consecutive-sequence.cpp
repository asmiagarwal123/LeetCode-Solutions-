class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if( nums.size()==0){
            return 0;
        }

        sort( nums.begin(), nums.end());

        int longest=1; 
        int countcurr=0;
        int lastsmallest=INT_MIN;

        for ( int i =0 ; i < nums.size() ; i++){
            if(nums[i]-1 == lastsmallest){
                countcurr++;
                lastsmallest=nums[i];
            }
            else if( nums[i]!= lastsmallest){
                countcurr=1;
                lastsmallest= nums[i];
        
            }
            longest= max(longest , countcurr);

        }

        
        return longest;
        

        

    }
};