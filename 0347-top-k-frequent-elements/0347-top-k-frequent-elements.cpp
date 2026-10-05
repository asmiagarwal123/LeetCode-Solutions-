class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map < int , int > mpp ; 
        for ( int x : nums){
            mpp[x]++;

        }

        vector < vector < int >> bucket(n+1);

        for (auto el : mpp) {
    bucket[el.second].push_back(el.first);
}

    vector < int > ans ;
    for (int i = n ;i >=1;i--){
        for ( int el : bucket[i]){
            ans.push_back(el);
            if ( ans.size()==k){
                return ans ; 
            }

        }
    }

    return ans ; 


        
    }
};