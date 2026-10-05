class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        

        map< int , int > mpp;

        for (int x : nums){
            if ( x%2==0){
                mpp[x]++;
            }
        }

        if (mpp.empty()) {
            return -1;
        }


        int n= nums.size();

         vector<vector<int>> bucket(n + 1);

        for (auto el : mpp) {
            bucket[el.second].push_back(el.first);
        }

        for (int i = n; i >= 1; i--) {
            if (!bucket[i].empty()) {
                return bucket[i].front();
            }
        }
 return -1;

        
    }
};