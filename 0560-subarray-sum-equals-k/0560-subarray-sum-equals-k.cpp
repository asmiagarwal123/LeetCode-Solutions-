class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        map < int , int > mpp;
        int prefixsum=0;
        int count =0 ; 
        mpp[0]=1;
        int n =nums.size();

        for ( int i =0 ; i < n ; i ++){
            prefixsum=prefixsum+nums[i];
            int currentsum=prefixsum-k;

            if(mpp.find(currentsum)!= mpp.end()){
                count=count+mpp[currentsum];
            }
            mpp[prefixsum]++;
        }

        return count;
        
    }
};