class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();

        int min = nums[0];
        int max = nums[0];

       for ( int i = 0 ; i < n ; i ++){
        if(nums[i]<min){
            min=nums[i];
        }
        if(nums[i]>max){
            max=nums[i];
        }
        int gcd= min % max ; 

        
        
       }

       while( max%min != 0){
        int rem = max %min ;
        max = min ; 
        min = rem ; 
       }
        

        return min ;
        
    }
};